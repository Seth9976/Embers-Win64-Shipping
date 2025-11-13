// 函数: sub_1417f01f0
// 地址: 0x1417f01f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = data_143f5b298

if (result != 0)
    int64_t* rdx = *(result + 0xb08)
    
    if (rdx != 0)
        if (arg1[1].d == 0)
            void* const r8_1 = &data_142fdca50
            
            if ((*(*rdx + 0x128))(rdx) != 0)
                r8_1 = &data_142fdca48
            
            return sub_140b1f700(arg3, u"Forced head tracking is %s", r8_1) __tailcall
        
        int64_t* rax = *arg1
        wchar16* rcx
        
        if (rax[1].d == 0)
            rcx = &data_142d40450
        else
            rcx = *rax
        
        sub_140b16cc0(rcx)
        jump(*(**(data_143f5b298 + 0xb08) + 0x130))

return result
