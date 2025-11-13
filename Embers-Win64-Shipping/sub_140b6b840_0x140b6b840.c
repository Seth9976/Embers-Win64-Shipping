// 函数: sub_140b6b840
// 地址: 0x140b6b840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
TEB* gsbase

if (data_143e18680 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e18680)
    
    if (data_143e18680 == 0xffffffff)
        atexit(sub_142cc0cc0)
        _Init_thread_footer(&data_143e18680)

if (data_143e18678 s<= 1)
    int64_t var_378
    int64_t* rax_4 = sub_140a48ae0(&var_378)
    
    if (&data_143e18670 != rax_4)
        int64_t rcx_3 = data_143e18670
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        data_143e18670 = *rax_4
        *rax_4 = 0
        data_143e18678 = rax_4[1].d
        data_143e1867c = *(rax_4 + 0xc)
        rax_4[1] = 0
    
    int64_t rcx_4 = var_378
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    DISPLAY_DEVICEW displayDevice
    displayDevice.cb = 0x348
    uint32_t iDevNum = 0
    
    if (EnumDisplayDevicesW(nullptr, 0, &displayDevice, 0) != 0)
        BOOL i
        
        do
            if ((displayDevice.StateFlags.b & 5) u> 0)
                var_324
                
                if (data_143e18670 != &var_324)
                    int32_t rbx_3
                    
                    if (var_324.w == 0)
                        rbx_3 = 0
                    else
                        int64_t rbx_2 = -1
                        
                        do
                            rbx_2 += 1
                        while (*(&var_324 + (rbx_2 << 1)) != 0)
                        
                        rbx_3 = rbx_2.d + 1
                    
                    int32_t rcx_6 = data_143e1867c
                    int32_t rdx_2 = 0
                    data_143e18678 = 0
                    
                    if (rcx_6 != rbx_3)
                        sub_1405947f0(&data_143e18670, rbx_3)
                        rcx_6 = data_143e1867c
                        rdx_2 = data_143e18678
                    
                    int32_t rax_9 = rbx_3 + rdx_2
                    data_143e18678 = rax_9
                    
                    if (rax_9 s> rcx_6)
                        sub_140594770(&data_143e18670)
                    
                    if (rbx_3 != 0)
                        memcpy(data_143e18670, &var_324, rbx_3 * 2)
                
                break
            
            var_364
            memset(&var_364, 0, 0x344)
            iDevNum += 1
            displayDevice.cb = 0x348
            i = EnumDisplayDevicesW(nullptr, iDevNum, &displayDevice, 0)
        while (i != 0)

*arg1 = 0
int32_t rbx_4 = data_143e18678
int64_t rsi = data_143e18670
arg1[1].d = rbx_4

if (rbx_4 != 0)
    sub_1405a4c70(arg1, rbx_4, 0)
    memcpy(*arg1, rsi, rbx_4 * 2)
else
    *(arg1 + 0xc) = 0

__security_check_cookie(rax_1 ^ &var_398)
return arg1
