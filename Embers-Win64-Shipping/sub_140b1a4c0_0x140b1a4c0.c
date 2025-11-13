// 函数: sub_140b1a4c0
// 地址: 0x140b1a4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6d00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6d00)
    
    if (data_143de6d00 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        data_143de6cf8 = (*(*rcx_7 + 0x38))(rcx_7, networkversionoverride", &data_143de6ce4, 
            Sets network version used for multiplayer ", 0)
        data_143de6cf0 = &data_142d3ff10
        atexit(sub_142cbf8b0)
        _Init_thread_footer(&data_143de6d00)

int32_t result

if (data_143de6ce8 != 0)
labelid_3:
    result = data_143de6ce4
else
    data_143de6ce8 = 1
    sub_140af2b60()
    int16_t rdx_1 = data_143dbb3f0
    char r8_1 = 0
    void* rbx_1 = &data_143dbb3f2
    
    if (rdx_1 == 0)
    label_140b1a561:
        result = data_143de6ce4
    else
        while (true)
            int16_t rax_2 = rdx_1 - 0x20
            
            if (rdx_1 - 0x61 u> 0x19)
                rax_2 = rdx_1
            
            if (r8_1 == 0 && rax_2 == 0x4e)
                if (sub_140a546e0(rbx_1, u"etworkversionoverride=", 0x16) == 0)
                    break
                
                r8_1 = 1
            else if (rax_2 - 0x41 u<= 0x19 || rax_2 - 0x30 u<= 9)
                r8_1 = 1
            else
                r8_1 = 0
            
            rdx_1 = *rbx_1
            rbx_1 += 2
            
            if (rdx_1 == 0)
                goto label_140b1a561_1
        
        if (rbx_1 == 2)
        label_140b1a561_1:
            result = data_143de6ce4
        else
            result = _wtoi(rbx_1 + 0x2c)
            data_143de6ce4 = result

if (result != 0)
    return result

return sub_140a1b090() __tailcall
