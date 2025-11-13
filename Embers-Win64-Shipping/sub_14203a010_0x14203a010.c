// 函数: sub_14203a010
// 地址: 0x14203a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
uint64_t result
void* r8_1
int64_t r9
result, r8_1, r9 = sub_142437e30(rax_1, 0, 1)

if ((*(result + 0x22d) & 0x40) == 0)
    void* rbx_1 = arg2[0x53]
    
    if (rbx_1 == 0)
    label_14203a0be:
        int32_t rcx_3
        rcx_3.b = sub_140b5b8a0(*(rax_1 + 0x590), 0) == 0
        
        if ((*(rax_1 + 0x594) != 0 | rcx_3.b) != 0)
            sub_142569550(arg2, *(rax_1 + 0x590))
            r8_1, r9 = sub_142569140(arg2)
        
        int32_t i = 0
        
        if (*(rax_1 + 0xa0) s> 0)
            int64_t* r14_1 = *(rax_1 + 0x98)
            int64_t r12_1 = sx.q(*(rax_1 + 0xa0)) << 3
            int64_t var_50 = 0
            int64_t r15_1 = 0
            int64_t var_48_1 = 0
            uint64_t r12_2 = r12_1 u>> 3
            
            if (r14_1 u> &r14_1[sx.q(*(rax_1 + 0xa0))])
                r12_2 = 0
            
            if (r12_2 != 0)
                do
                    int64_t* rsi_1 = *r14_1
                    
                    if (rsi_1 != 0)
                        char rax_10 = (*(*rsi_1 + 0x270))(rsi_1)
                        int64_t rdx_3 = *rsi_1
                        char rax_11 = (*(rdx_3 + 0x268))(rsi_1, rdx_3)
                        int64_t rdi_1 = sx.q(var_48_1.d)
                        int32_t rcx_8 = (rdi_1 + 1).d
                        var_48_1.d = rcx_8
                        
                        if (rcx_8 s> var_48_1:4.d)
                            sub_1405a4f90(&var_50)
                        
                        int64_t rdi_2 = rdi_1 << 4
                        int64_t* rdi_3 = rdi_2 + var_50
                        
                        if (rdi_2 == neg.q(var_50))
                            rdi_3 = nullptr
                        else
                            rdi_3[1] = 0
                            *rdi_3 = 0
                        
                        void var_58
                        void arg_20
                        int64_t rcx_12 =
                            *sub_142272470(arg2, &var_58, *sub_1420e4d10(rsi_1, &arg_20), 0)
                        *(rdi_3 + 0xc) &= 0xfffffffc
                        *rdi_3 = rcx_12
                        *(rdi_3 + 0xc) |= ((zx.d(rax_10) & 1) * 2) | (zx.d(rax_11) & 1)
                        *(rdi_3 + 0xc) = (zx.d(*(rsi_1 + 0xba)) u>> 5 & 0x7fffffc)
                            | (*(rdi_3 + 0xc) & 0xfffffffb)
                        rdi_3[1].d = rsi_1[0x16].d
                    
                    r14_1 = &r14_1[1]
                    r15_1 += 1
                while (r15_1 != r12_2)
            
            sub_142569d10(arg2, &var_50)
            r8_1, r9 = sub_142569200(arg2)
            int64_t rcx_23 = var_50
            
            if (rcx_23 != 0)
                r8_1, r9 = sub_140a74f90(rcx_23)
        
        result = zx.q(*(rax_1 + 0x588))
        
        if (result.d s> 0)
            do
                r9.b = i == result.d - 1
                r8_1.b = i == 0
                r8_1, r9 = sub_142569550(arg2, *(*(rax_1 + 0x580) + (sx.q(i) << 3)))
                result = zx.q(*(rax_1 + 0x588))
                i += 1
            while (i s< result.d)
    else
        void* rax_2
        rax_2, r9 = sub_142531230()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx + 0x38))
            result = *(rdx + 0x30)
        
        if (rax_3.d s> *(rdx + 0x38) || *(result + (rax_3 << 3)) != rax_2 + 0x30)
            void* rbx_2 = arg2[0x53]
            
            if (rbx_2 == 0)
                goto label_14203a0be
            
            void* rax_4
            rax_4, r9 = sub_1424929c0()
            void* rdx_1 = *(rbx_2 + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx_1 + 0x38))
                goto label_14203a0be
            
            result = *(rdx_1 + 0x30)
            
            if (*(result + (rax_5 << 3)) != rax_4 + 0x30)
                goto label_14203a0be

return result
