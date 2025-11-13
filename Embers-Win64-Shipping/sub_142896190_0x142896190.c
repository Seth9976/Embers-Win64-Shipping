// 函数: sub_142896190
// 地址: 0x142896190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_142890ec0(arg1)
int32_t r15 = -1

if (arg2 == arg3 && arg4 u>= 0x18)
    arg1[2].d
    
    if (sub_142892150(arg1) s> 0 && sub_1428d14f0(rax + 0x100, &arg1[7], sx.q(*(rax + 0x2cc))) == 0)
        int64_t rax_3 = *(rax + 0x2d0)
        
        if (arg1[2].d == 0)
            int32_t rax_5
            
            if (rax_3 == 0)
                rax_5 = sub_1428d1630(rax + 0x100, arg3 + 8, arg2 + 8, arg4 - 0x18)
            else
                rax_5 = sub_1428d1a00(rax + 0x100, arg3 + 8, arg2 + 8, arg4 - 0x18, rax_3)
            
            if (rax_5 == 0)
                sub_1428d2a30(rax + 0x100, &arg1[7], zx.q(rax_5 + 0x10))
                
                if (sub_1428bc500(&arg1[7], arg3 + 8 + arg4 - 0x18, 0x10) == 0)
                    r15 = (arg4 - 0x18).d
                else
                    sub_1428b8960(arg2 + 8, arg4 - 0x18)
        else
            int32_t rax_4
            
            if (rax_3 == 0)
                rax_4 = sub_1428d1d70(rax + 0x100, arg3 + 8, arg2 + 8, arg4 - 0x18)
            else
                rax_4 = sub_1428d2150(rax + 0x100, arg3 + 8, arg2 + 8, arg4 - 0x18, rax_3)
            
            if (rax_4 == 0)
                sub_1428d2a30(rax + 0x100, arg2 + 8 + arg4 - 0x18, zx.q(rax_4 + 0x10))
                r15 = arg4.d
    
    *(rax + 0xfc) = 0
    *(rax + 0x2cc) = 0xffffffff

return zx.q(r15)
