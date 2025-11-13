// 函数: sub_142677ed0
// 地址: 0x142677ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t* r15 = arg3
arg2[1] = 0
int32_t rdx = *(arg1 + 0x38)

if (rdx s> 0)
    sub_1405dadb0(arg2, rdx)

int64_t* rcx_1 = *r15
char rax_2 = sub_14243ade0((*(*rcx_1 + 0x150))(rcx_1))
void* rsi = r15[1]
char rbp = rax_2
void* var_90 = rsi

if (rsi == 0)
    return arg2

int32_t* rbx = *(arg1 + 0x30)
void* rdi_3 = &rbx[sx.q(*(arg1 + 0x38)) * 0x10]
void* var_88 = rdi_3

if (rbx == rdi_3)
    return arg2

do
    if (rbx[0xe].b != 0)
        int32_t* rax_3 = sub_142610ea0(rsi, *rbx, rbx[1], rbx[2])
        
        if (rax_3 != 0)
            int64_t rax_4 = sub_14260f690(rsi, rax_3)
            
            if (rbp != 0)
                int32_t var_a8_1 = rbx[2]
                void var_80
                sub_142688aa0(r15, &var_80, *rbx, rbx[1])
                int32_t var_60
                int64_t* var_58
                
                if (var_58 != 0 && *var_58 != 0 && var_60 s> 0)
                    rbx[8] = var_60
                    int64_t rdx_4 = 0
                    int64_t rax_6 = *var_58
                    
                    if (rax_6 != 0)
                        rdx_4 = rax_6
                        *var_58 = 0
                    
                    **(rbx + 0x28) = rdx_4
                
                int64_t* var_50
                
                if (var_50 != 0)
                    if (0 == var_50[1].d)
                        var_50[1].d = 0
                    else
                        var_50[1].d
                    
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        (**var_50)(var_50)
                        int32_t rax_11 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (rax_11 == 1)
                            (*(*var_50 + 8))(var_50, 1)
            
            int32_t r15_1 = rbx[1]
            int32_t r12_1 = *rbx
            int64_t rdi_5 = sx.q(rbx[2])
            int32_t arg_24 = r15_1
            int32_t arg_10
            sub_142681570(&arg3[2], &arg_10, r12_1.q)
            int64_t rax_13 = sx.q(arg_10)
            void* const rcx_14
            
            if (rax_13.d == 0xffffffff)
                rcx_14 = nullptr
            else
                rcx_14 = (rax_13 << 5) + arg3[2]
            
            int64_t* rsi_1 = rcx_14 + 8
            
            if (rcx_14 == 0)
                rsi_1 = nullptr
            
            if (rsi_1 != 0)
                int32_t i = rsi_1[1].d
                
                if (rdi_5.d s>= 0 && rdi_5.d s< i)
                    sub_1426920f0(rsi_1, rdi_5.d, 1, 1)
                    i = rsi_1[1].d
                    
                    if (rdi_5.d s< i)
                        int64_t rcx_16 = rdi_5 * 0x38
                        
                        do
                            rcx_16 += 0x38
                            *(rcx_16 + *rsi_1 - 0x38) = rdi_5.d
                            rdi_5 = zx.q(rdi_5.d + 1)
                            i = rsi_1[1].d
                        while (rdi_5.d s< i)
                
                if (i == 0)
                    int32_t var_94_1 = r15_1
                    sub_142691f60(&arg3[2], r12_1.q)
            
            rbp = rax_2
            int64_t* r8_3
            void* r9_4
            
            if (rbp == 0)
                r8_3 = nullptr
                r9_4 = nullptr
            else
                r8_3 = *(rbx + 0x10)
                r9_4 = &rbx[3]
            
            rsi = var_90
            sub_142615c20(rsi, rax_4, r8_3, r9_4)
            int64_t rdi_6 = sx.q(arg2[1].d)
            int32_t r13_3 = (rax_4 u>> (*(rsi + 0xa0)).b).d & ((1 << (*(rsi + 0x9c)).b).d - 1)
            int32_t rax_17 = (rdi_6 + 1).d
            arg2[1].d = rax_17
            
            if (rax_17 s> *(arg2 + 0xc))
                sub_1405a4cf0(arg2)
            
            r15 = arg3
            *(*arg2 + (rdi_6 << 2)) = r13_3
            rdi_3 = var_88
    
    rbx[0xe].b = 0
    *rbx = 0
    rbx[2] = 0
    rbx = &rbx[0x10]
while (rbx != rdi_3)

return arg2
