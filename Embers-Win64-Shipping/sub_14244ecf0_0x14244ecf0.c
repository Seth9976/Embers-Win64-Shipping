// 函数: sub_14244ecf0
// 地址: 0x14244ecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x40)
*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) != rdx)
    sub_1405c5570(arg1 + 0x48, rdx)

int64_t* r14 = *(arg1 + 0x38)
int64_t result = sx.q(*(arg1 + 0x40))
void* rbp_1 = result * 0xb0 + r14
void* arg_10 = rbp_1

if (r14 != rbp_1)
    int64_t arg_8 = 0
    
    do
        void* const rdi_1 = *(arg1 + 0x20)
        void* rax
        int64_t rax_1
        void* rdx_1
        
        if (rdi_1 != 0)
            rax = sub_1425be5e0()
            rdx_1 = *(rdi_1 + 0x10)
            rax_1 = sx.q(*(rax + 0x38))
        
        if (rdi_1 == 0 || rax_1.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
            rdi_1 = nullptr
        
        if ((sub_140b5b8a0(0, 0) & 1) != 0)
            sub_140d19010(rdi_1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rax_5 = sub_140d2dfc0(sub_14252cd20(), rdi_1, 0, 0x40, 0, 0, 0, 0, 0)
        sub_1420ee550(rax_5, *r14)
        *(rax_5 + 0x50) = *r14
        
        if (rax_5 + 0x58 != &r14[1])
            int64_t rbp_2 = sx.q(r14[2].d)
            int64_t r12_1 = r14[1]
            int32_t r8_2 = *(rax_5 + 0x64)
            *(rax_5 + 0x60) = rbp_2.d
            
            if (rbp_2.d != 0 || r8_2 != 0)
                sub_1405c4a00(rax_5 + 0x58, rbp_2.d, r8_2)
                memcpy(*(rax_5 + 0x58), r12_1, (rbp_2 << 3).d)
            else
                *(rax_5 + 0x64) = rbp_2.d
            
            rbp_1 = arg_10
        
        int64_t rdi_3 = sx.q(*(arg1 + 0x50))
        int32_t rax_6 = (rdi_3 + 1).d
        *(arg1 + 0x50) = rax_6
        
        if (rax_6 s> *(arg1 + 0x54))
            sub_1405a4d70(arg1 + 0x48)
        
        result = *(arg1 + 0x48)
        r14 = &r14[0x16]
        *(result + (rdi_3 << 3)) = rax_5
    while (r14 != rbp_1)

return result
