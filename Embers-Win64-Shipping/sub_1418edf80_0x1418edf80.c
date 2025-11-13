// 函数: sub_1418edf80
// 地址: 0x1418edf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

void var_b8
int64_t rax_2 = __security_cookie ^ &var_b8
sub_141903c30(arg4)
uint64_t r9 = *(arg4 + 0x20)

if (r9 == 0)
    void* r9_1 = *(arg4 + 0x60)
    
    if (r9_1 != 0)
        sub_1418edc60(*(arg1 + 0x20), arg2, arg3, r9_1)
    else if (*(arg4 + 0x28) != 0)
        if (sub_1418e0d30(*(arg1 + 0x78) + 0x248, *(arg4 + 0x38), 0) != 1)
            int64_t* rbx_1 = *(arg4 + 0x28)
            
            if (rbx_1 == 0)
                goto label_1418ee0e8
            
            void* rax_5 = (*(*rbx_1 + 0x28))(rbx_1)
            
            if (rax_5 != 0)
                rbx_1 = *(rax_5 + 0x60)
            
            if (rax_5 != 0 && rbx_1 == 0)
                goto label_1418ee0e8
            
            void* rax_7 = (*(*rbx_1 + 8))(rbx_1)
            int32_t* rbx_2
            int64_t* rdi_1
            void* r14_1
            
            if (rax_7 == 0)
                void* rax_9 = (*(*rbx_1 + 0x10))(rbx_1)
                
                if (rax_9 == 0)
                    rax_9 = (*(*rbx_1 + 0x18))(rbx_1)
                    
                    if (rax_9 != 0)
                        goto label_1418ee098
                    
                    int64_t r9_2
                    rax_7, r9_2 = (*(*rbx_1 + 0x20))(rbx_1)
                    
                    if (rax_7 != 0)
                        goto label_1418ee073
                    
                    sub_140af98a0("Unknown", 0x2f1, u"Unknown Vulkan RHI texture type", r9_2)
                    sub_140afbb40()
                label_1418ee0e8:
                    rbx_2 = 0x78
                    r14_1 = 0x78
                    rdi_1 = 0x18
                else
                label_1418ee098:
                    r14_1 = rax_9 + 0xe8
                    rbx_2 = rax_9 + 0xe8
                    rdi_1 = rax_9 + 0x88
            else
            label_1418ee073:
                r14_1 = rax_7 + 0xe0
                rbx_2 = rax_7 + 0xe0
                rdi_1 = rax_7 + 0x80
            
            void* rax_13 = sub_1418e1a70(*(*(arg1 + 0x78) + 0x240))
            int64_t* r15_2 = *(arg1 + 0x78) + 0x2e8
            int64_t rax_14 = *rdi_1
            int32_t var_88
            sub_140865c40(r15_2, &var_88, rax_14)
            int64_t rcx_12 = sx.q(var_88)
            void* const rdx_4
            
            if (rcx_12.d == 0xffffffff)
                rdx_4 = nullptr
            else
                rdx_4 = *r15_2 + rcx_12 * 0x18
            
            var_88 = 1
            int32_t* r15_3 = rdx_4 + 8
            
            if (rdx_4 == 0)
                r15_3 = nullptr
            
            int32_t var_98
            int32_t var_68
            
            if (r15_3 == 0)
                int64_t rdx_6 = *rdi_1
                var_68 = *r14_1
                int32_t var_64_2 = 0
                int64_t var_60_2 = 1
                int32_t var_58_2 = 1
                var_98.q = &var_68
                var_68.o = var_68.o
                sub_1418c0f40(*(rax_13 + 0x40), rdx_6, 0, 8, var_98)
                sub_1418ca3c0(r15_2, rdi_1, &var_88)
            else
                int32_t rcx_14 = *r15_3
                
                if (rcx_14 != 1)
                    var_68 = *rbx_2
                    int32_t var_64_1 = 0
                    int64_t var_60_1 = 1
                    int32_t var_58_1 = 1
                    var_68.o = var_68.o
                    int32_t rax_17 = sub_1418e1d20(rcx_14)
                    var_98.q = &var_68
                    sub_1418c0f40(*(rax_13 + 0x40), rax_14, rax_17, 8, var_98)
                    *r15_3 = 1
        
        sub_1418ee330(*(arg1 + 0x20), arg2, arg3, arg4 + 0x30, 1)
else
    sub_1418ede90(*(arg1 + 0x20), arg2, arg3, r9)

__security_check_cookie(rax_2 ^ &var_b8)
