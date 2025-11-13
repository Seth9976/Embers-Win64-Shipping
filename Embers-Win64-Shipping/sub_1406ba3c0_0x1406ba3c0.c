// 函数: sub_1406ba3c0
// 地址: 0x1406ba3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t var_58 = 0
int32_t var_48 = 0x2f
void var_158
void* var_50 = &var_158
sub_1405a7220(&var_158, 0x30, "FFMPEGMedia/ThirdParty/ffmpeg/bin/vs/ffmpeg.exe", 0x30, 0x3f)
void* var_1f8 = var_50
int16_t* var_218
int64_t var_178
sub_1406b35b0(&var_218, sub_140b256a0(&var_178), &var_1f8)
int64_t rcx_3 = var_178

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_140b21570(&var_218)
Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_218)
int64_t* rax_4 = sub_140b11c80(&var_1f8, &var_218)
int32_t var_210

if (&var_218 != rax_4)
    int16_t* rcx_8 = var_218
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    var_218 = *rax_4
    *rax_4 = 0
    var_210 = rax_4[1].d
    int32_t var_20c_1 = *(rax_4 + 0xc)
    rax_4[1] = 0

void* rcx_9 = var_1f8

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int16_t* const rbx_1 = &data_142d40450
int16_t* const rax_8

if (arg3[1].d == 0)
    rax_8 = &data_142d40450
else
    rax_8 = *arg3

if (arg2[1].d != 0)
    *arg2

int16_t* const r8_1

if (arg1[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *arg1

int16_t var_228
var_228.q = rax_8
int16_t* var_208
sub_140a2e390(&var_208, u"-y -i "%s" -i "%s" -c:v copy -c:a aac -shortest "%s"", r8_1)
int16_t* const r8_2 = &data_142d40450

if (var_210 != 0)
    r8_2 = var_218

int64_t var_168
sub_140a2e390(&var_168, u"%s %s", r8_2)
SHELLEXECUTEINFOW execInfo
execInfo.cbSize = 0
execInfo.fMask = 0
execInfo.hwnd = 0
execInfo.lpVerb = 0
execInfo.lpFile = 0
execInfo.lpParameters = 0
execInfo.lpDirectory = 0
execInfo.nShow = 0
execInfo.hInstApp = 0
execInfo.lpIDList = 0
execInfo.lpClass = 0
execInfo.hkeyClass = 0
execInfo.dwHotKey = 0
execInfo..hIcon = 0
execInfo.hProcess = 0
execInfo.cbSize = 0x70
execInfo.fMask = 0x40
execInfo.hwnd = 0
execInfo.lpVerb = u"open"
int16_t* rax_9 = &data_142d40450

if (var_210 != 0)
    rax_9 = var_218

execInfo.lpFile = rax_9
int32_t var_200

if (var_200 != 0)
    rbx_1 = var_208

execInfo.lpParameters = rbx_1
execInfo.lpDirectory = 0
execInfo.nShow = 0
execInfo.hInstApp = 0
ShellExecuteExW(&execInfo)
WaitForSingleObject(execInfo.hProcess, 0xffffffff)
CloseHandle(execInfo.hProcess)
int64_t rcx_15 = var_168

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_208

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int16_t* rcx_17 = var_218

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_248)
return result
