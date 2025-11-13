// 函数: sub_142618ea0
// 地址: 0x142618ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13

if (arg3 == 0)
    r13 = -1
else
    r13 = *arg3

int32_t i = 0
*(arg1 + 0x2b10) = 0

if (*(arg1 + 4) s<= 0)
    return 

int64_t r15_1 = 0
int128_t zmm6 = zx.o(0)

do
    void* rbx_1 = *(r15_1 + *(arg1 + 0x10))
    
    if (*(rbx_1 + 0x327) == 1)
        if ((*(rbx_1 + 0x2ac) & 2) == 0)
            *(rbx_1 + 0x250) = *(rbx_1 + 0x244)
            *(rbx_1 + 0x254) = *(rbx_1 + 0x248)
            *(rbx_1 + 0x258) = *(rbx_1 + 0x24c)
        else
            sub_1426337f0(*(arg1 + 0x6b8))
            int32_t j = 0
            
            if (*(rbx_1 + 0x224) s> 0)
                void* rdi_1 = rbx_1 + 0x1f4
                
                do
                    void* rcx_2 = sx.q(*rdi_1) * 0x328 + *(arg1 + 8)
                    sub_1426206d0(*(arg1 + 0x6b8), rcx_2 + 0x22c, *(rcx_2 + 0x280), rcx_2 + 0x25c, 
                        rcx_2 + 0x244)
                    j += 1
                    rdi_1 += 8
                while (j s< *(rbx_1 + 0x224))
            
            int32_t j_1 = 0
            float zmm2
            
            if (*(rbx_1 + 0x164) s> 0)
                void* rdi_2 = rbx_1 + 0x70
                
                do
                    zmm2 = *(rbx_1 + 0x234)
                    int128_t zmm3 = *(rbx_1 + 0x22c)
                    
                    if (not((*(rdi_2 - 4) - zmm2) * (*rdi_2 f- zmm3.d)
                            - (*(rdi_2 + 8) - zmm2) * (*(rdi_2 - 0xc) f- zmm3.d) f< zmm6.d))
                        sub_142620a40(*(arg1 + 0x6b8), rdi_2 - 0xc, rdi_2, (*(rdi_2 + 0x10)).b)
                    
                    j_1 += 1
                    rdi_2 += 0x20
                while (j_1 s< *(rbx_1 + 0x164))
            
            int32_t* r8_1 = nullptr
            
            if (arg3 != 0 && r13 == ((rbx_1 - *(arg1 + 8)) s/ 0x328).d)
                r8_1 = *(arg3 + 0x20)
            
            zmm2 = *(rbx_1 + 0x280)
            void* rax_8 = arg1 + 0x5d8 + zx.q(*(rbx_1 + 0x2ae)) * 0x1c
            int128_t* rcx_8 = *(arg1 + 0x6b8)
            int32_t* var_68
            var_68.d = *(rbx_1 + 0x29c)
            uint64_t rax
            
            if (*(rax_8 + 0x18) != 0xff)
                rax, zmm6 = sub_142633d60(rcx_8, rbx_1 + 0x22c, zmm2, *(rbx_1 + 0x228), var_68.d, 
                    rbx_1 + 0x25c, rbx_1 + 0x244, rbx_1 + 0x250, rax_8, r8_1)
                *(arg1 + 0x2b10) += rax.d
            else
                rax, zmm6 = sub_1426338e0(rcx_8, rbx_1 + 0x22c, zmm2, (rbx_1 + 0x250).d, var_68, 
                    rbx_1 + 0x25c, rbx_1 + 0x244, rbx_1 + 0x250, rax_8)
                *(arg1 + 0x2b10) += rax.d
    
    i += 1
    r15_1 += 8
while (i s< *(arg1 + 4))
