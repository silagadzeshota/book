<p align="center">
  <a href="#how-to-build">How to Build</a> •
</p>

<h1><a id="user-content-how-to-build" class="anchor" aria-hidden="true" href="#how-to-build"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>How to Build</h1>
<h2><a id="user-content-getting-the-code-with-git" class="anchor" aria-hidden="true" href="#getting-the-code-with-git"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Getting the code with git and build</h2>
<ul>
<li>Use Git from the Terminal, see the <a href="https://help.github.com/articles/set-up-git/">Setting up Git</a> and <a href="https://help.github.com/articles/fork-a-repo/">Fork a Repo</a> articles.</li>
<li>develop branch: the newest code</li>
<li>master branch: more stable than develop.
In the shell command, type:</li>
</ul>
<div class="highlight highlight-source-shell"><pre>
git clone https://gitlab.cloudhosted.io/fortunejack/coin-server-v2.git
cd coin-server-v2
//during update might be needed "make clean" first
make DEFAULTCONF=Release
</pre></div>


<h1><a id="user-content-running" class="anchor" aria-hidden="true" href="#running"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Running</h1>





<h3><a id="user-content-running-multi-nodes" class="anchor" aria-hidden="true" href="#running-multi-nodes"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Create Coin Server working directory (if not exists)</h3>
<p>Create empty coin server working directory, THIS DIRECTORY MUST BE ONE AND ONLY FOR ALL COINS</p>


<h3><a id="user-content-running-multi-nodes" class="anchor" aria-hidden="true" href="#running-multi-nodes"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Running Node</h3>
<p>First run the coin specific node to connect public blockchain (might need configuration)</p>

<h3><a id="user-content-running-multi-nodes" class="anchor" aria-hidden="true" href="#running-multi-nodes"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Create database with given file from project - postgres.sql </h3>
<p>We will need to manually insert starting blockchain block parameters to start project operation from specific block</p>

<h3><a id="user-content-running-multi-nodes" class="anchor" aria-hidden="true" href="#running-multi-nodes"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Create coin speficic config file</h3>



<div class="highlight highlight-source-shell"><pre>

MODULE=tron
COIN_SERVER_WORK_DIR=/home/shsilagadze/Desktop/coin_server_work_dir/

#log directory starting from coin server working directory
LOG_DIRECTORY=/log/tron/

DB_NAME=coin_server_database
DB_USER=coin_server_user
DB_PASSWORD=coin_server_password
DB_SCHEMA=coin_server_schema
DB_HOST=127.0.0.1

FULL_NODE_IP=127.0.0.1
FULL_NODE_PORT=8090
BLOCKCHAIN_CHECK_INTERVAL=2

CONFIRMATION_NUMBER=19
RESERVED_WALLETS_NUM=150
WALLETS_SPEND_INTERVAL=21600

LOCAL_THRIFT_PORT=9015
REMOTE_THRIFT_SERVER=127.0.0.1
REMOTE_THRIFT_PORT=9000

</pre></div>

<p>then before running the executable increase stack soft limit with the following command "ulimit -s 256000" and run with config file parameter - </p>
<div class="highlight highlight-source-shell"><pre>
coin-server-v2 -cfg=/path/to/created/config/file
</pre></div>


<details>
<summary>Correct output</summary>
<div class="highlight highlight-source-shell"><pre>
config file - ./config/tron_config.cfg
RUNNING IN PRODUCTION MODE ...
Module: tron
new thread created with Id : 7f007ae94700, name : Fill Wallets in Database                 Running threads: 1
new thread created with Id : 7f007a693700, name : Parse Blockchain for new transfers       Running threads: 2
new thread created with Id : 7f0079e92700, name : Transfer Deposit balances to casino      Running threads: 3
new thread created with Id : 7f0079691700, name : Notify server for transaction updates    Running threads: 4
new thread created with Id : 7f0078e90700, name : Module Specific Thread                   Running threads: 5
Thrift server starting on post - 9015

</pre></div>
</details>



<h1><a id="user-content-running" class="anchor" aria-hidden="true" href="#running"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Stopping</h1>



<h3><a id="user-content-running-multi-nodes" class="anchor" aria-hidden="true" href="#running-multi-nodes"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Stopping coin server</h3>
<p>Running coin server MUST be stopped only with SIGINT (Ctrl + C) signal to the running process</p>


<details>
<summary>Correct output</summary>
<div class="highlight highlight-source-shell"><pre>
Thread interrupted. name : Notify thrift client for new transaction updates
Remaining running threads : 4
Thread interrupted. name : Fill Wallets in Database
Remaining running threads : 3
Thread interrupted. name : Parse Blockchain for new transfers
Remaining running threads : 2
Thread interrupted. name : Module Specific Thread
Remaining running threads : 1
Thread interrupted. name : Transfer Deposit balances to casino
Remaining running threads : 0
stopping server...
THE END !
Thrift server stopped successfully
Tron Module Terminated
</pre></div>
