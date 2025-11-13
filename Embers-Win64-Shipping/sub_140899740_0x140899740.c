// 函数: sub_140899740
// 地址: 0x140899740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
HMODULE hLibModule = data_143cea660
__builtin_memset(&data_143cea668, 0, 0x18)

if (hLibModule != 0)
    FreeLibrary(hLibModule)
    data_143cea660 = 0

int64_t rbx = sx.q(MultiByteToWideChar(0xfde9, 0, "DSOUND.DLL", 0xffffffff, nullptr, 0))
PWSTR rax_3 = malloc(rbx * 2)
MultiByteToWideChar(0xfde9, 0, "DSOUND.DLL", 0xffffffff, rax_3, rbx.d)
HMODULE hLibModule_1 = LoadLibraryW(rax_3)
free(rax_3)

if (hLibModule_1 == 0)
    char _Destination[0x200]
    strncpy(&_Destination, "Failed loading ", 0x1ff)
    void var_219
    void* rax_5 = &var_219
    bool cond:2_1
    
    do
        cond:2_1 = *(rax_5 + 1) != 0
        rax_5 += 1
    while (cond:2_1)
    __builtin_strncpy(rax_5, "DSOUND.DLL", 0xb)
    data_143cea660 = hLibModule_1
    goto label_140899937

data_143cea660 = hLibModule_1
int64_t rax_6 = sub_14089acf0(hLibModule_1, "DirectSoundCreate8")
HMODULE rcx_6 = data_143cea660
data_143cea668 = rax_6
int32_t rbx_1 = 1

if (rax_6 == 0)
    rbx_1 = 0

int64_t rax_7 = sub_14089acf0(rcx_6, "DirectSoundEnumerateW")
HMODULE rcx_7 = data_143cea660
data_143cea670 = rax_7

if (rax_7 == 0)
    rbx_1 = 0

int64_t rax_8 = sub_14089acf0(rcx_7, "DirectSoundCaptureEnumerateW")
data_143cea678 = rax_8
int64_t result

if (rax_8 == 0 || rbx_1 == 0)
    hLibModule_1 = data_143cea660
label_140899937:
    __builtin_memset(&data_143cea668, 0, 0x18)
    
    if (hLibModule_1 != 0)
        FreeLibrary(hLibModule_1)
        data_143cea660 = 0
    
    result = 0
else
    arg1[1] = sub_140899e40
    *arg1 = sub_140899c90
    arg1[4] = sub_14089a090
    result = 1
    arg1[3] = sub_14089a0d0
    arg1[6] = sub_14089a210
    arg1[5] = sub_140899cb0
    arg1[7] = sub_140899bd0
    arg1[0xa] = sub_140899c50

__security_check_cookie(rax_1 ^ &var_248)
return result
