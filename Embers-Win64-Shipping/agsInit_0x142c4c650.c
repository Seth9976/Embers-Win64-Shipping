// 函数: agsInit
// 地址: 0x142c4c650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
uint64_t result

if (arg1 != 0)
    int64_t rax_2
    
    if (arg2 == 0)
        rax_2 = data_14401af20
    else
        rax_2 = *arg2
        
        if (rax_2 == 0)
            rax_2 = data_14401af20
        else
            int64_t rcx = arg2[1]
            
            if (rcx == 0)
                rax_2 = data_14401af20
            else
                data_14401af20 = rax_2
                data_14401af28 = rcx
    
    struct HINSTANCE__** rax_3
    
    if (rax_2 == 0)
        rax_3 = malloc(0x410)
    else
        rax_3 = rax_2(0x410)
    
    *arg1 = rax_3
    
    if (rax_3 != 0)
        memset(rax_3, 0, 0x410)
        HMODULE rax_4 = sub_142c516a0("atiadlxx.dll", "atiadlxy.dll")
        *rax_3 = rax_4
        
        if (rax_4 != 0)
            int32_t result_1 = sub_142c4c220(rax_3)
            
            if (result_1 == 0)
                if (rax_3[2](sub_142c4c190, 1, &rax_3[1]) == 0)
                    SetEnvironmentVariableW(u"ADL_4KWORKAROUND_CANCEL", u"TRUE")
                    sub_142c50aa0(rax_3)
                    uint32_t iDevNum = 0
                    var_1d4
                    memset(&var_1d4, 0, 0x1a4)
                    DISPLAY_DEVICEA displayDevice
                    displayDevice.cb = 0x1a8
                    
                    if (EnumDisplayDevicesA(nullptr, 0, &displayDevice, 0) != 0)
                        BOOL i
                        
                        do
                            if ((displayDevice.StateFlags.b & 4) != 0)
                                int32_t j = 0
                                
                                if (rax_3[0x81].d s> 0)
                                    int64_t rsi_2 = 0
                                    
                                    do
                                        void* r11_1 = rax_3[0x80]
                                        void* rax_10 = r11_1 + 0x218 + rsi_2
                                        void* r8_3 = &var_1d4 - rax_10
                                        uint32_t k
                                        uint32_t rdx_2
                                        
                                        do
                                            rdx_2 = zx.d(*rax_10)
                                            k = zx.d(*(rax_10 + r8_3))
                                            
                                            if (rdx_2 != k)
                                                break
                                            
                                            rax_10 += 1
                                        while (k != 0)
                                        
                                        if (rdx_2 - k == 0)
                                            int64_t rax_11 = sx.q(rax_3[0x7f].d)
                                            int64_t r8_4 = 0
                                            
                                            if (rax_11.d s> 0)
                                                void* rdx_4 = rax_3[0x7e]
                                                
                                                do
                                                    int64_t rcx_7 = sx.q(*(rdx_4 + 0x70)) * 0x624
                                                    
                                                    if (*(rcx_7 + r11_1 + 0x10c)
                                                            == *(rsi_2 + r11_1 + 0x10c)
                                                            && *(rcx_7 + r11_1 + 0x108)
                                                            == *(rsi_2 + r11_1 + 0x108))
                                                        *(rdx_4 + 0x38) = 1
                                                        break
                                                    
                                                    r8_4 += 1
                                                    rdx_4 += 0x78
                                                while (r8_4 s< rax_11)
                                        
                                        j += 1
                                        rsi_2 += 0x624
                                    while (j s< rax_3[0x81].d)
                                
                                break
                            
                            iDevNum += 1
                            i = EnumDisplayDevicesA(nullptr, iDevNum, &displayDevice, 0)
                        while (i != 0)
                    
                    if (arg3 != 0)
                        *arg3 = 5
                        *(arg3 + 0x10) = &rax_3[0x3e]
                        *(arg3 + 4) = 4
                        *(arg3 + 0x18) = &rax_3[0x5e]
                        arg3[3] = 0
                        *(arg3 + 0x28) = rax_3[0x7e]
                        arg3[8] = rax_3[0x7f].d
                        sub_142c515c0(rax_3)
                        sub_142c50e20(rax_3)
                        sub_142c4c990(rax_3)
                    
                    result = 0
                else
                    int64_t rax_7 = data_14401af28
                    *arg1 = 0
                    
                    if (rax_7 == 0)
                        free(rax_3)
                        result = 7
                    else
                        rax_7(rax_3)
                        result = 7
            else
                int64_t rdx = data_14401af28
                *arg1 = 0
                
                if (rdx == 0)
                    free(rax_3)
                    result = zx.q(result_1)
                else
                    rdx(rax_3)
                    result = zx.q(result_1)
        else
            *arg1 = rax_4
            int64_t rax_5 = data_14401af28
            
            if (rax_5 == 0)
                free(rax_3)
                result = 4
            else
                rax_5(rax_3)
                result = 4
    else
        result = zx.q((rax_3 + 3).d)
else
    result = zx.q((arg1 + 2).d)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
