const char index_html[] PROGMEM = R"rawliteral(<!DOCTYPE html>
<html style="font-family: Arial, Helvetica, sans-serif;
display: inline-block;
text-align: center;">
<head>
  <title>BTT KNOMI SETTINGS MANAGER</title>
  <link rel='shortcut icon' type='image/x-icon' href='/favicon.ico' />
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <style>
    * {
      box-sizing: border-box;
    }

    body {
      margin: 0;
      font-family: Arial, Helvetica, sans-serif;
    }

    .topnav {
      overflow: hidden;
      background-color: #333;
    }
    
    .tabName {
      float: none;
      display: none;
      color: #f2f2f2;
      text-align: left;
      padding: 14px 16px;
      text-decoration: none;
      text-transform: capitalize;
      font-size: 17px;
    }

    .topnav a {
      float: left;
      display: block;
      color: #f2f2f2;
      text-align: center;
      padding: 14px 16px;
      text-decoration: none;
      font-size: 17px;
    }

    .topnav a:hover {
      background-color: #ddd;
      color: black;
    }

    .topnav a.active {
      background-color: #04AA6D;
      color: white;
    }

    .topnav .icon {
      display: none;
      position: absolute;
      right: 0;
      top: 0;
    }

    h1 {
      font-size: 1.8rem;
      color: white;
    }
    h2 {
      font-size: 0.8rem;
      color: white;
    }
    p {
      font-size: 1.4rem;
    }
    .content {
      padding: 5%;
      max-width: 1024px;
      margin: auto;
    }
    .card-grid {
      max-width: 800px;
      margin: 0 auto;
      display: flex;
      justify-content: center;
      align-items: center;
      display: block;
    }
    .card {
      background-color: white;
      box-shadow: 2px 2px 12px 1px rgba(140,140,140,.5);
      padding: 15px 15px;
      border: 1px solid lightgrey;
      flex: 1;
      min-height: 100px;
      display: flex;
      justify-content: center;
      align-items: center;
      flex-direction: column;
    }
    .card-title {
      font-size: 1.2rem;
      font-weight: bold;
      color: #034078
    }
    
    input[type=text], select, textarea {
      width: 100%;
      padding: 12px;
      border: 1px solid #ccc;
      border-radius: 4px;
      resize: vertical;
    }

    label {
      padding: 12px 12px 12px 0;
      display: inline-block;
    }
    
    input[type=button],
    input[type=submit] {
      background-color: #04AA6D;
      color: #fff;
      padding: 12px 20px;
      border: none;
      border-radius: 5px;
      margin: 6px 0 0 0;
      float: right;
      transition-duration: 0.4s;
    }
    
    input[type=button],
    input[type=submit]:hover {
      background-color: #45a049;
      transition-duration: 0.4s;
    }
    
    .col-25 {
      float: left;
      width: 25%;
      margin-top: 6px;
    }
    
    .col-50 {
      float: left;
      width: 50%;
      margin-top: 6px;
    }

    .col-75 {
      float: left;
      width: 75%;
      margin-top: 6px;
    }
    .col-100 {
      float: left;
      width: 100%;
      margin-top: 6px;
    }

    /* Clear floats after the columns */
    .row:after {
      content: "";
      display: table;
      clear: both;
    }
    
    input[id="sys-btn"] {
      padding: 15px 15px;
      text-align: center;
      text-decoration: none;
      display: inline-block;
      width: 230px;
      height: 45;
    }
    p {
      display: flex;
      flex-flow: column;
      height: 100%;
      width: 100%;
    }
    
    input[type=text], input[type=password], input[type=color], select {
      width: 100%;
      padding: 12px 12px;
      border: 1px solid #ccc;
      margin-right: 0px;
      margin-left: 0px;
      border-radius: 5px;
      box-sizing: border-box;
      display: table-cell;
    }
    input[type=color] {
      padding: 2px;
    }
    label {
      font-size: 1.2rem;
      text-align: center;
      padding: 10px;
      display: flex;
    }
    .value{
      font-size: 1.2rem;
      color: #1282A2;
    }
    .refresh-btn{
      max-width: 800px;
      margin: 0 auto;
      position: relative;
      bottom: 0;
      left: 0;
      right: 0;
      width: 100%;
      border: none;
      color: #FEFCFB;
      background-color: #C02E2F;
      text-align: center;
      text-decoration: none;
      font-size: 16px;
      border-radius: 5px;
      transition-duration: 0.4s;
    };
    .state {
      font-size: 1.2rem;
      color: #1282A2;
    }
    .table-container {
        height: 20em;
        margin: 0 auto;
        position: relative;
    }
    table {
        display: flex;
        flex-flow: column;
        height: 100%;
        width: 100%;
        padding: 5px;
    }
    table thead {
        /* head takes the height it requires,
        and it's not scaled when table is resized */
        flex: 0 0 auto;
        width: calc(100% - 0.9em);
    }
    table tbody {
        /* body takes all the remaining available space */
        flex: 1 1 auto;
        display: block;
        overflow-y: scroll;
    }
    table tbody tr {
        width: 100%;
    }
    table thead,
    table tbody tr {
        display: table;
        table-layout: fixed;
    }
    table {
        border: 0px none;
    }
    table td, table th {
        padding: 0.3em;
        text-align: center;
    }
    tr:nth-child(even) {background-color: #525252;}
    .modal {
      display: none;
      position: fixed;
      z-index: 8;
      left: 0;
      top: 0;
      width: 100%;
      height: 100%;
      overflow: auto;
      background-color: rgb(0, 0, 0);
      background-color: rgba(0, 0, 0, 0.4);
    }
    .modal-content {
      margin: 300px auto;
      max-width: 400px;
      min-width: 200px;
      border: 0px solid #999;
      width: 60%;
    }
    h2,
    p {
      margin: 0 0 20px;
      font-weight: 400;
      color: #999;
    }
    span {
      color: #666;
      display: block;
      padding: 0 0 5px;
      white-space: nowrap;
    }
    .modal_form {
      padding: 25px;
      margin: 25px;
      border-radius: 5px;
      background: #eee;
    }
    .contact-form button {
      width: 100%;
      padding: 10px;
      border: none;
      background: #04AA6D;
      font-size: 16px;
      font-weight: 400;
      color: #fff;
    }
    button:active {
      opacity: 0.8;
    }
    .close {
      color: #aaa;
      float: right;
      font-size: 28px;
      font-weight: bold;
    }
    .close:hover,
    .close:focus {
      color: black;
      text-decoration: none;
      cursor: pointer;
    }
    .ant-form-item-row{
      display: flex;
      justify-content: center;
      align-items: center;
      margin: 20px 0;
    }
    body {
        padding: 0;
        margin: 0;
    }

    .btn_confirm {
        background-color: #04AA6D;
        color: #fff;
        padding: 5px 10px;
        border: 1px solid #04AA6D;
        border-radius: 5px;
        margin-right: 10px;
        cursor: pointer;
    }

    .btn_cancel {
        background-color: #C02E2F;
        padding: 5px 10px;
        border: 1px solid #C02E2F;
        border-radius: 5px;
        margin-right: 10px;
        cursor: pointer;
    }

    .form_item span {
        display: inline-block;
        width: 100px;
    }

    .form_item input{
        width: 200px;
        height: 25px;
        line-height: 25px;
        outline: none;
        border-radius: 5px;
    }

    .form_item {
        margin-bottom: 10px;
    }

    .form_item:last-child {
        margin-bottom: 0;
    }

    .overlap {
        background: #000;
        opacity: 0.6;
        width: 100%;
        height: 100%;
        display: none;
        position: absolute;
    }

    #popup_id {
      position: fixed;
      left: 0px;
      top: 0px;
      width: 100%;
      height: 100%;
      font-size: 16px;
      background-color: rgba(0, 0, 0, 0.5);
      filter: progid:DXImageTransform.Microsoft.gradient(startColorstr=#7f000000,endColorstr=#7f000000);
      display: none;
    }
    .popup {
      background-color: #fff;
      max-width: 400px;
      min-width: 200px;
      height: auto;
      border-radius: 5px;
      margin: 100px auto;
      text-align: center;
    }
    .popup_title {
      height: 60px;
      line-height: 60px;
      border-bottom: solid 1px #cccccc;
    }
    .popup_content {
      height: auto;
      line-height: 25px;
      padding: 15px 10px;
      text-align: left;
      color: #000;
    }
    .popup_btn {
      padding-bottom: 10px;
    }
    .popup_btn button {
      width: 40%;
      height: 40px;
      cursor: pointer;
      border: none;
      border-radius: 5px;
      margin: 5px 10px;
      color: #fff;
      background-color: #04AA6D;
    }
    
    /* Responsive layout - when the screen is less than 600px wide, make the two columns stack on top of each other instead of next to each other */
    @media screen and (max-width: 600px) {
      .col-25, .col-50, .col-75, .col-100, input[type=submit] {
        width: 100%;
      }
      .col-25, .col-50, .col-75, .col-100 {
        margin-top: 0;
      }
      .modal-content {
        margin: 35% auto;
        max-width: 100%;
        min-width: 100%;
      }
      .tabName {display: block;}
      .topnav a {display: none;} /* :not(:first-child) */
      .topnav a.icon {
        float: right;
        display: block;
      }
      .topnav.responsive {position: relative;}
      .topnav.responsive a {
        float: none;
        display: block;
        text-align: left;
      }
    }
    
    @media (prefers-color-scheme: dark) {
      body {
        color: #fff;
        background-color: #2a2a2a !important;
      }
      h2,
      p {
        color: #fff;
      }
      .popup {
        background-color: #2a2a2a;
      }
      .popup_title {
        border-bottom: solid 1px #999;
      }
      .popup_content {
        color: #fff;
      }
      .modal_form {
        background: #2a2a2a;
      }
    }
</style>
  <script>
        var popup_clicked = false;
        var popup_btn = false;
        async function waitPopupBtn(){
            await new Promise( (resolve) =>{
                let timer = setInterval(() =>{
                    if(popup_clicked){
                        clearInterval(timer)
                        resolve(true)
                    }
                },100)
            })
            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "none";
            return Promise.resolve(true)
        }
        async function showPopupKlipper(){
            popup_clicked = false;
            popup_btn = false;
            var ip = document.getElementById("ip").value;
            var port = document.getElementById("port").value;
            var tool = document.getElementById("tool").value;
            document.getElementById("popup_title_id").innerHTML="Klipper Config";
            document.getElementById("popup_content_id").innerHTML="<div>" + "Klipper IP: "+ "<font color='#C02E2F'>" + ip + "</font><br>"
                                                                + "Klipper Port: " + "<font color='#C02E2F'>" + port + "</font><br>"
                                                                + "Tool ID: " + "<font color='#C02E2F'>" + tool + "</font><br></div>";

            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "block";
            await waitPopupBtn();
            if (popup_btn) {
                document.getElementById('klipper-form').submit();
            }
            return popup_btn;
        }
        async function showPopupAp(){
            popup_clicked = false;
            popup_btn = false;
            var obj_mode = document.getElementById("mode");
            var mode = obj_mode.options[obj_mode.selectedIndex].text;
            var ssid = document.getElementById("ap-ssid").value;
            var pwd = document.getElementById("ap-pwd").value;
            var name = document.getElementById("hostname").value;
            document.getElementById("popup_title_id").innerHTML="Access Point Config";
            document.getElementById("popup_content_id").innerHTML="<div>" + "WiFi mode: "+ "<font color='#C02E2F'>" + mode + "</font><br>"
                                                                + "AP SSID: " + "<font color='#C02E2F'>" + ssid + "</font><br>"
                                                                + "AP PWD: " + "<font color='#C02E2F'>" + pwd + "</font><br>"
                                                                + "Hostname: " + "<font color='#C02E2F'>" + name + "</font><br></div>";

            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "block";
            await waitPopupBtn();
            if (popup_btn) {
                document.getElementById('ap-form').submit();
            }
            return popup_btn;
        }
        async function showPopupRestart(){
            popup_clicked = false;
            popup_btn = false;
            document.getElementById("popup_title_id").innerHTML="Restart?";
            document.getElementById("popup_content_id").innerHTML="KNOMI will disconnect the network connection and restart<br>Please reconnect after KNOMI restart."

            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "block";
            await waitPopupBtn();
            if (popup_btn) {
                document.getElementById('restart-form').submit();
            }
            return popup_btn;
        }
        async function showPopupKnomi(){
            popup_clicked = false;
            popup_btn = false;
            var color = document.getElementById("ui_Color").value;
            document.getElementById("popup_title_id").innerHTML="KNOMI Config";
            document.getElementById("popup_content_id").innerHTML="<div>" + "UI Color: "+ "<font color='#C02E2F'>" + color + "</font></div>";

            var popup_id = document.getElementById("popup_id");
            popup_id.style.display = "block";
            await waitPopupBtn();
            if (popup_btn) {
                document.getElementById('knomi-form').submit();
            }
            return popup_btn;
        }
        function popupConfirm(){
            popup_clicked = true;
            popup_btn = true;
        }
        function popupCancel(){
            popup_clicked = true;
            popup_btn = false;
        }
        function openTab(tabName) {
          var i, x;
          x = document.getElementsByClassName("containerTab");
          for (i = 0; i < x.length; i++) {
            x[i].style.display = "none";
          }
          document.getElementById(tabName + 'Tab').style.display = "block";
          y = document.getElementsByClassName("navLink");
          for (i = 0; i < y.length; i++) {
            y[i].classList.remove("active");
          }
          document.getElementById(tabName + 'Link').classList.add("active");
          document.getElementById("tabName").innerHTML=tabName;
          navFunction();
        } 
  </script>
</head>
<body>
  <div class="topnav" id="knomiNav">
    <span id="tabName" class="tabName">Klipper</span>
    <a id="klipperLink" href="javascript:void(0);" onclick="openTab('klipper');" class="navLink active">Klipper</a>
    <a id="wifiLink" href="javascript:void(0);" onclick="openTab('wifi');" class="navLink">Wifi</a>
    <a id="apLink" href="javascript:void(0);" onclick="openTab('ap');" class="navLink">Access Point</a>
    <a id="knomiLink" href="javascript:void(0);" onclick="openTab('knomi');" class="navLink">Knomi</a>
    <a href="javascript:void(0);" class="icon" onclick="navFunction();">
      &#9776;
    </a>
  </div>
  <div class="content">
    <div class="container">
      <div id="klipperTab" class="containerTab" style="display:block;">
        <form id="klipper-form" name="klipper-form" action="/" method="POST">
          <div class="row">
            <div class="col-25">
              <label for="ip">Klipper IP:</label>
            </div>
            <div class="col-75">
              <input type="text" id="ip" name="ip" $ip$ maxlength="64" placeholder="1.2.3.4 or printer.local">
            </div>
          </div>
          <div class="row">
            <div class="col-25">
              <label for="port">Klipper Port:</label>
            </div>
            <div class="col-75">
              <input type="text" id="port" name="port" $port$ maxlength="5">
            </div>
          </div>
          <div class="row">
            <div class="col-25">
              <label for="tool">Tool ID:</label>
            </div>
            <div class="col-75">
              <input type="text" id ="tool" name="tool" $tool$ maxlength="6">
            </div>
          </div>
        </form>
        <div class="row">
            <input type ="submit" id="submit-btn" value ="Apply" onclick="showPopupKlipper()">
          </div>
      </div>
    </div>
    <div id="wifiTab" class="containerTab" style="display:none;">
      <div id="modalOne" class="modal">
        <div class="modal-content">
          <div class="contact-form">
            <a class="close">&times;</a>
            <form class="modal_form" action="/" method="POST">
              <div>
                <input readonly id ="ssid" class="fname" type="text" name="ssid" placeholder="ssid" />
                <span></span>
                <input class="fname" type="text" name="password" placeholder="password" />
                <span></span>
              </div>
              <button type="submit" >Connect</button>
            </form>
          </div>
        </div>
      </div>
      <div class="table-container">
        <table>
          <thead>
            <tr>
              <th>SSID</th>
              <th>RSSI</th>
              <th>STATUS</th>
            </tr>
          </thead>
          <tbody>
            $wifi_list$
          </tbody>
        </table>
      </div>
      <form name="refresh" action="/" method="POST">
        <input type ="submit" class="refresh-btn" name="refresh" value="Refresh">
      </form>
    </div>
    <div id="apTab" class="containerTab" style="display:none;">
      <form id="ap-form" name="ap-form" action="/" method="POST">
        <div class="row">
          <div class="col-25">
            <label for="ip">Mode:</label>
          </div>
          <div class="col-75">
            <select id ="mode" name="mode">
              <option value="ap" $ap$>AP</option>
              <option value="sta" $sta$>STA</option>
              <option value="apsta" $apsta$>AP+STA</option>
            </select>
          </div>
        </div>
        <div class="row">
          <div class="col-25">
            <label for="port">AP SSID:</label>
          </div>
          <div class="col-75">
            <input type="text" id ="ap-ssid" name="ap_ssid" $ap_ssid$ minlength="1" maxlength="32" required="required">
          </div>
        </div>
        <div class="row">
          <div class="col-25">
            <label for="tool">AP PWD:</label>
          </div>
          <div class="col-75">
            <input type="text" id ="ap-pwd" name="ap_password" $ap_password$ minlength="6" maxlength="64">
          </div>
        </div>
        <div class="row">
          <div class="col-25">
            <label for="tool">Hostname:</label>
          </div>
          <div class="col-75">
            <input type="text" id ="hostname" name="hostname" $hostname$ maxlength="15">
          </div>
        </div>
      </form>
      <div class="row">
        <input type ="submit" id="submit-btn" value ="Apply" onclick="showPopupAp()">
      </div>
    </div>
    <div id="knomiTab" class="containerTab" style="display:none;">
      <div class="row">
        <div class="col-50">
          <a href="update"><input type="submit" style="float:none;" id="sys-btn" value ="Update Firmware"></a>
        </div>
        <div class="col-50">
          <form id="restart-form" name="restart-form" action="/" method="POST">
            <input type="hidden" name="restart">
          </form>
        <input type="submit" style="background-color:#C02E2F;float:none;" id="sys-btn" value="Restart" onclick="showPopupRestart()">
        </div>
      </div>
    </div>
  </div>
  <div id="popup_id">
    <div class="popup">
      <p id="popup_title_id" class="popup_title"></p>
      <p id="popup_content_id" class="popup_content"></p>
      <div class="popup_btn">
        <button style="background-color: #525252" onclick="popupCancel()">Cancel</button>
        <button onclick="popupConfirm()">Confirm</button>
      </div>
    </div>
  </div>
  <script>
    let modalBtns = [...document.querySelectorAll(".showpop")];
    modalBtns.forEach(function (btn, index) {
      btn.onclick = function (event) {
        let modal = btn.getAttribute("data-modal");
        document.getElementById(modal).style.display = "block";
        console.log(modalBtns[index].getElementsByClassName("ssid")[0].innerHTML,document.getElementById("ssid"))
        document.getElementById("ssid").value = modalBtns[index].getElementsByClassName("ssid")[0].innerHTML;
      };
    });
    let closeBtns = [...document.querySelectorAll(".close")];
    closeBtns.forEach(function (btn) {
      btn.onclick = function () {
        let modal = btn.closest(".modal");
        modal.style.display = "none";
      };
    });
    window.onclick = function (event) {
      if (event.target.className === "modal") {
        event.target.style.display = "none";
      }
    };
    function navFunction() {
    var x = document.getElementById("knomiNav");
    if (x.className === "topnav") {
      x.className += " responsive";
    } else {
      x.className = "topnav";
    }
  }
  </script>
</body>
</html>)rawliteral";
