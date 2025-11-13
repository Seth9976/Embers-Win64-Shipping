// 函数: sub_140e493c0
// 地址: 0x140e493c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int64_t* rbx = arg1

if (rsi.d == 0)
    return 0

int64_t* rcx = *arg1
uint64_t rdi = 0
int32_t r14 = 0
int64_t var_60 = *rcx
void* rax_2 = rcx[1]
uint64_t var_68 = 0
void* var_58 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int64_t rbp = 0
int64_t r12
r12.b = sub_140e55ed0(arg2, &var_60) == 0

do
    int32_t r15_2 = r14
    int32_t arg_18 = r14
    r14 += 1
    rbp += 1
    
    if (rbp s< rsi)
        int64_t rsi_2 = rbp << 4
        
        do
            int64_t rax_4 = *arg1
            int64_t* rbx_1 = *(rsi_2 + rax_4 + 8)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void* rcx_2 = *arg2
            int64_t* rax_6 = *(rcx_2 + 0x18)
            void* rdx_3 = &rax_6[sx.q(*(rcx_2 + 0x20)) * 2]
            
            if (rax_6 == rdx_3)
            label_140e494c5:
                rdi.b = 1
            else
                while (*rax_6 != *(rsi_2 + rax_4))
                    rax_6 = &rax_6[2]
                    
                    if (rax_6 == rdx_3)
                        goto label_140e494c5
                
                rdi.b = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (r12.b != rdi.b)
                break
            
            r14 += 1
            rbp += 1
            rsi_2 += 0x10
        while (rbp s< rsi)
        
        r15_2 = arg_18
        rbx = arg1
        rdi = var_68
    
    int32_t i_1 = r14 - r15_2
    
    if (r12.b == 0)
        if (i_1 != 0)
            int64_t* rdi_4 = (sx.q(r15_2) << 4) + 8 + *rbx
            int32_t i
            
            do
                int64_t* rbx_2 = *rdi_4
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp2_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_4 = &rdi_4[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        rdi = var_68
    else
        if (rdi.d != r15_2)
            memmove((sx.q(rdi.d) << 4) + *rbx, (sx.q(r15_2) << 4) + *rbx, i_1 << 4)
        
        rdi = zx.q(rdi.d + i_1)
        var_68 = rdi
    
    rbx = arg1
    r12.b ^= 1
while (rbp s< rsi)

rbx[1].d = rdi.d
return zx.q(rsi.d - rdi.d)
