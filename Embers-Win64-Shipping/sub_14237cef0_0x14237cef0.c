// 函数: sub_14237cef0
// 地址: 0x14237cef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int64_t* rdi = arg2
int32_t var_54 = rsi.d
int64_t* r15 = arg1

if (rsi.d == 0)
    return 0

int32_t rbx = 0
int32_t r12 = 0
int32_t arg_20 = 0
int64_t var_50 = rsi
uint64_t r14
r14.b = sub_1423821f0(rdi, *arg1, arg3) == 0
int64_t rbp = 0
char arg_18 = r14.b

do
    int32_t rcx_6 = r12
    rbp += 1
    r12 += 1
    
    if (rbp s< rsi)
        int64_t r14_2 = rbp << 4
        
        do
            int64_t* rcx_1 = *r15
            int64_t r15_1 = 0
            int64_t* rdx_1 = *rdi
            int64_t* rbx_1 = *(rcx_1 + r14_2 + 8)
            
            if (rbx_1 != 0)
                int32_t rax_2 = rbx_1[1].d
                
                if (rax_2 == 0)
                    rbx_1 = nullptr
                else
                    rbx_1[1].d = rax_2 + 1
                    
                    if (rbx_1 != 0)
                        r15_1 = *(rcx_1 + r14_2)
            
            int64_t* rdi_1 = rdx_1[1]
            int64_t rsi_1 = 0
            
            if (rdi_1 != 0)
                int32_t rax_4 = rdi_1[1].d
                
                if (rax_4 != 0)
                    rdi_1[1].d = rax_4 + 1
                    
                    if (rdi_1 != 0)
                        rsi_1 = *rdx_1
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp5_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi = var_50
            int32_t rax_10
            rax_10.b = r15_1 != rsi_1
            
            if (zx.d(r14.b) != rax_10)
                break
            
            r15 = arg1
            r12 += 1
            rdi = arg2
            rbp += 1
            r14_2 += 0x10
        while (rbp s< rsi)
        
        r15 = arg1
        rbx = arg_20
        r14 = zx.q(arg_18)
    
    int32_t i_1 = r12 - rcx_6
    
    if (r14.b == 0)
        if (i_1 != 0)
            int64_t* rbx_5 = (sx.q(rcx_6) << 4) + 8 + *r15
            int32_t i
            
            do
                int64_t* rcx_10 = *rbx_5
                
                if (rcx_10 != 0)
                    int32_t temp1_1 = *(rcx_10 + 0xc)
                    *(rcx_10 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rcx_10 + 8))(rcx_10, 1)
                
                rbx_5 = &rbx_5[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        rbx = arg_20
    else
        if (rbx != rcx_6)
            memmove((sx.q(rbx) << 4) + *r15, (sx.q(rcx_6) << 4) + *r15, i_1 << 4)
        
        rbx += i_1
        arg_20 = rbx
    
    rdi = arg2
    r14.b ^= 1
    arg_18 = r14.b
while (rbp s< rsi)

r15[1].d = rbx
return zx.q(var_54 - rbx)
