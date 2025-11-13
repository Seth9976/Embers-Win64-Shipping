// 函数: sub_1428f18c0
// 地址: 0x1428f18c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0

if (sub_142898c70(arg2) s> 0)
    int32_t rax_2
    
    do
        sub_14289a750(arg3, &data_14370209c)
        int64_t* rax_1 = sub_142898ea0(arg2, rdi)
        void* rdx_1 = *rax_1
        
        if (rdx_1 != 0)
            sub_1428f1f20(arg3, rdx_1, zx.q(arg4))
        
        int32_t* r8_1 = rax_1[1]
        
        if (r8_1 != 0)
            sub_1428f2080(arg3, "Reasons", r8_1, arg4)
        
        if (rax_1[2] != 0)
            sub_1428b6f70(arg3, "%*sCRL Issuer:\n", zx.q(arg4))
            sub_1428f1fd0(arg3, rax_1[2], arg4)
        
        rdi += 1
        rax_2 = sub_142898c70(arg2)
    while (rdi s< rax_2)

return 1
