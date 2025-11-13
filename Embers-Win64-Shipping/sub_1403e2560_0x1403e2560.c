// 函数: sub_1403e2560
// 地址: 0x1403e2560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t rbx = *(arg1 + 0x11f8)
int32_t r14 = 0

if (rbx != arg2 || *(arg1 + 0x11e8) != *(arg1 + 0x11e4))
    if (rbx != 0)
        int32_t rdi_1 = ((zx.q(*(arg1 + 0x11fc) * 5) << 1) + 5).d
        int32_t rbx_1 = rbx * rdi_1
        int32_t r12_2 = rdi_1 * arg2
        int32_t rax_5 = r12_2
        
        if (rbx_1 s> r12_2)
            rax_5 = rbx_1
        
        int64_t rcx_3 = sx.q(rax_5) * 2
        int64_t rax_6 = rcx_3 + 0xf
        
        if (rax_6 u<= rcx_3)
            rax_6 = 0xffffffffffffff0
        
        int64_t rax_7 = rax_6 & 0xfffffffffffffff0
        __chkstk(rax_7)
        void var_68
        void* rsp_1 = &var_68 - rax_7
        int32_t rcx_4 = rbx_1 - 1
        int64_t rax_8 = sx.q(rcx_4)
        int16_t* var_40_1 = rsp_1 + 0x20
        
        if (rcx_4 s>= 0)
            void* r8_2 = rsp_1 + 0x20 + (rax_8 << 1)
            void* rdx_2 = arg1 + 0x24a4 + (rax_8 << 2)
            int32_t temp2_1
            
            do
                int32_t zmm1 = *rdx_2
                var_48.d = zmm1
                int16_t rax_10
                
                if (int.d(var_48.d) s<= 0x7fff)
                    var_48.d = zmm1
                    
                    if (int.d(var_48.d) s>= 0xffff8000)
                        var_48.d = zmm1
                        rax_10 = (int.d(var_48.d)).w
                    else
                        rax_10 = -0x8000
                else
                    rax_10 = 0x7fff
                
                *r8_2 = rax_10
                r8_2 -= 2
                rdx_2 -= 4
                temp2_1 = rcx_4
                rcx_4 -= 1
            while (temp2_1 - 1 s>= 0)
        
        var_48 = rsp_1 - 0x110
        *(rsp_1 - 0x110)
        int32_t rax_13 =
            sub_1403df310(rsp_1 - 0x110, sx.d(*(arg1 + 0x11f8)) * 0x3e8, *(arg1 + 0x11e4), 0)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x10624dd3, *(arg1 + 0x11e4))
        int32_t r13_2 = temp0_1 s>> 6
        int32_t r13_4 = (r13_2 + (r13_2 u>> 0x1f)) * rdi_1
        int64_t rax_17 = sx.q(r13_4) * 2
        int64_t rdx_6 = rax_17 + 0xf
        
        if (rdx_6 u<= rax_17)
            rdx_6 = 0xffffffffffffff0
        
        int64_t rdx_7 = rdx_6 & 0xfffffffffffffff0
        __chkstk(rdx_7)
        sub_1403df180(var_48, rsp_1 - 0x130 - rdx_7 + 0x20, var_40_1, rbx_1)
        int32_t r14_3 =
            rax_13 + sub_1403df310(arg1 + 0x16c0, *(arg1 + 0x11e4), sx.d(arg2.w) * 0x3e8, 1)
        sub_1403df180(arg1 + 0x16c0, var_40_1, rsp_1 - 0x130 - rdx_7 + 0x20, r13_4)
        r14 = r14_3
        sub_1403e27d0(arg1 + 0x24a4, var_40_1, r12_2)
    else
        r14 = sub_1403df310(arg1 + 0x16c0, *(arg1 + 0x11e4), arg2 * 0x3e8, rbx + 1)

*(arg1 + 0x11e8) = *(arg1 + 0x11e4)
__security_check_cookie(rax_1 ^ &var_48)
return zx.q(r14)
