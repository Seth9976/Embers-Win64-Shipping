// 函数: sub_14296b2e0
// 地址: 0x14296b2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x660)
void var_698
int64_t rax_1 = __security_cookie ^ &var_698
int32_t rbx = 0
data_143fed13c = 0
data_143fed140 = 0
data_143fed0d0 = signal(0x16, &data_14296b750)
data_143fed060 = signal(8, &data_14296b750)
data_143fed040 = signal(4, &data_14296b750)
data_143fed030 = signal(2, &data_14296b750)
data_143fed078 = signal(0xb, &data_14296b750)
data_143fed098 = signal(0xf, &data_14296b750)
data_143fed140 = 1

if (arg3 == 0 && data_143fed138 != 0)
    data_143fed124 = data_143fed120 & 0xfffffffb
    SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), data_143fed124)

bool cond:0 = data_143fed138 == 0
data_143fed140 = 2
char var_648[0xb0]
var_648[0] = 0
int64_t r8
char (* rdi_1)[0xb0]

if (cond:0)
    char (* rax_20)[0xb0]
    rax_20, r8 = fgets(&var_648, 0x1ff, data_143fed128)
    rdi_1 = rax_20
label_14296b595:
    
    if (rdi_1 != 0)
    label_14296b5a5:
        int32_t rax_21
        rax_21, r8 = feof(data_143fed128)
        
        if (rax_21 == 0)
            int32_t rax_22
            rax_22, r8 = ferror(data_143fed128)
            
            if (rax_22 == 0)
                char* rax_23 = strchr(&var_648, 0xa)
                
                if (rax_23 == 0)
                    FILE* _Stream = data_143fed128
                    
                    while (true)
                        char var_654
                        char* rax_24
                        rax_24, r8 = fgets(&var_654, 4, _Stream)
                        
                        if (rax_24 == 0)
                            break
                        
                        if (strchr(&var_654, 0xa) != 0)
                            goto label_14296b617
                else
                    if (arg4 != 0)
                        *rax_23 = 0
                    
                label_14296b617:
                    int32_t rax_26
                    rax_26, r8 = sub_14293b440(arg1, arg2, &var_648)
                    
                    if (rax_26 s>= 0)
                        rbx = 1
else
    uint32_t numberOfCharsRead
    
    if (GetEnvironmentVariableW(u"OPENSSL_WIN32_UTF8", nullptr, 0) == 0)
        BOOL rax_19
        rax_19, r8 = ReadConsoleA(GetStdHandle(STD_INPUT_HANDLE), &var_648, 0x1ff, 
            &numberOfCharsRead, nullptr)
        
        if (rax_19 != 0)
            uint32_t numberOfCharsRead_2 = numberOfCharsRead
            
            if (numberOfCharsRead_2 u>= 2)
                void* r8_3 = &var_648[zx.q(numberOfCharsRead_2 - 2)]
                
                if (*r8_3 == 0xd)
                    uint64_t rcx_6 = zx.q(numberOfCharsRead_2 - 1)
                    
                    if (var_648[rcx_6] == 0xa)
                        *r8_3 = 0xa
                        numberOfCharsRead_2 = rcx_6.d
                        numberOfCharsRead = rcx_6.d
            
            uint64_t numberOfCharsRead_3 = zx.q(numberOfCharsRead_2)
            
            if (numberOfCharsRead_3 u>= 0x200)
                __report_rangecheckfailure()
                noreturn
            
            var_648[numberOfCharsRead_3] = 0
            goto label_14296b5a5
    else
        wchar16 var_448[0x200]
        BOOL rax_13
        rax_13, r8 = ReadConsoleW(GetStdHandle(STD_INPUT_HANDLE), &var_448, 0x1ff, 
            &numberOfCharsRead, nullptr)
        
        if (rax_13 != 0)
            uint32_t numberOfCharsRead_1 = numberOfCharsRead
            
            if (numberOfCharsRead_1 u>= 2)
                uint64_t rax_14 = zx.q(numberOfCharsRead_1 - 2)
                
                if (var_448[rax_14] == 0xd)
                    uint64_t rcx_2 = zx.q(numberOfCharsRead_1 - 1)
                    
                    if (var_448[rcx_2] == 0xa)
                        var_448[rax_14] = 0xa
                        numberOfCharsRead_1 = rcx_2.d
                        numberOfCharsRead = rcx_2.d
            
            if (zx.q(numberOfCharsRead_1) * 2 u>= 0x400)
                __report_rangecheckfailure()
                noreturn
            
            BOOL* lpUsedDefaultChar = nullptr
            var_448[zx.q(numberOfCharsRead_1)] = 0
            rdi_1 = &var_648
            
            if (WideCharToMultiByte(0xfde9, 0, &var_448, 0xffffffff, &var_648, 0x200, nullptr, 
                    lpUsedDefaultChar) s<= 0)
                rdi_1 = nullptr
            
            r8 = sub_1428b8960(&var_448, 0x400)
            goto label_14296b595

if (data_143fed13c == 2)
    rbx = -1

if (arg3 == 0)
    sub_141528310(data_143fed130, &data_14370209c, r8)

int32_t rax_30 = data_143fed140

if (rax_30 s>= 2 && arg3 == 0 && data_143fed138 != arg3)
    data_143fed124 = data_143fed120
    SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), data_143fed124)
    rax_30 = data_143fed140

if (rax_30 s>= 1)
    signal(0x16, data_143fed0d0)
    signal(8, data_143fed060)
    signal(4, data_143fed040)
    signal(2, data_143fed030)
    signal(0xb, data_143fed078)
    signal(0xf, data_143fed098)

sub_1428b8960(&var_648, 0x200)
__security_check_cookie(rax_1 ^ &var_698)
return zx.q(rbx)
