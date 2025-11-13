// 函数: sub_142894c80
// 地址: 0x142894c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax = sub_142890ec0(arg1)

if (arg3 != 0)
    void* r15_1
    
    if (arg2 != 0)
    label_142894cd5:
        *(rax + 0x210) = 0
        int32_t rax_2 = sub_142890ee0(arg1) << 2
        int64_t (* rax_3)(int32_t* arg1, int32_t* arg2, int32_t* arg3)
        
        if (arg4 == 0)
            sub_1428cef80(arg2, rax_2, rax)
            rax_3 = sub_1428ce380
        else
            sub_1428cf200(arg2, rax_2, rax)
            rax_3 = sub_1428ce970
        
        *(rax + 0x200) = rax_3
        r15_1 = &rax[0x3e]
        int32_t rbx_2 = sub_142890ee0(arg1) << 2
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(sub_142890ee0(arg1))
        sub_1428cf200(sx.q((temp1_1 - temp0_1) s>> 1) + arg2, rbx_2, r15_1)
        *(rax + 0x208) = sub_1428ce970
        *(rax + 0x1f0) = rax
        goto label_142894d65
    
    r15_1 = &rax[0x3e]
label_142894d65:
    
    if (arg3 != 0)
        *(rax + 0x1f8) = r15_1
        int128_t* rax_9 = sub_1406219d0(arg1)
        *rax_9 = *arg3
else if (arg2 != 0)
    goto label_142894cd5

return 1
