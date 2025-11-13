// 函数: sub_14092e920
// 地址: 0x14092e920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
int64_t* rsi = arg1
int64_t rdi
rdi.b = 0
void* rax_1 = (*(*arg1 + 0x20))()
char var_48
int64_t var_40
int64_t __saved_r15
int64_t __saved_r14
int64_t __saved_r13

if (rax_1 != 0)
    __saved_r13 = arg4
    rdi.b = 1
    int32_t i = 0
    var_48 = 1
    
    if (rbx[1].d s> 0)
        int64_t rcx = 0
        __saved_r14 = arg5
        __saved_r15 = arg6
        var_40 = 0
        
        do
            int64_t* r12_1 = *(rax_1 + 0xd0)
            int64_t* rbx_1 = r12_1
            int64_t* r15_1 = *rbx + rcx
            void* rdi_3 = &r12_1[sx.q(*(rax_1 + 0xd8)) * 2]
            
            if (r12_1 == rdi_3)
                goto label_14092e9cd
            
            int64_t* rsi_1 = *r15_1
            
            while ((**rsi_1)(rsi_1, *rbx_1) == 0)
                rbx_1 = &rbx_1[2]
                
                if (rbx_1 == rdi_3)
                    goto label_14092e9c8
            
            if (((rbx_1 - r12_1) s>> 4).d == 0xffffffff)
            label_14092e9c8:
                rsi = arg1
            label_14092e9cd:
                int64_t rbx_2 = sx.q(*(rax_1 + 0xd8))
                int32_t rax_4 = (rbx_2 + 1).d
                *(rax_1 + 0xd8) = rax_4
                
                if (rax_4 s> *(rax_1 + 0xdc))
                    sub_1405a4f90(rax_1 + 0xd0)
                
                int64_t* rcx_5 = (rbx_2 << 4) + *(rax_1 + 0xd0)
                *rcx_5 = *r15_1
                void* rax_6 = r15_1[1]
                rcx_5[1] = rax_6
                
                if (rax_6 != 0)
                    *(rax_6 + 8) += 1
                
                sub_14092eac0(rsi, *r15_1)
                int32_t rax_7 = *(rax_1 + 0xac)
                
                if (rax_7 s<= 0)
                    int32_t rax_9 = *(rax_1 + 0xa8)
                    
                    if (rax_9 s> 0)
                        *(rax_1 + 0xa8) = rax_9 - 1
                else
                    *(rax_1 + 0xac) = rax_7 - 1
            else
                rsi = arg1
                sub_14092eac0(rsi, *r15_1)
            
            i += 1
            rbx = arg3
            rcx = var_40 + 0x10
            var_40 = rcx
        while (i s< rbx[1].d)
        
        rdi = 1

(*(*rsi + 0x308))(rsi, arg2, rbx, zx.q(rdi.b), var_48, var_40, __saved_r15, __saved_r14, 
    __saved_r13)
return zx.q(rdi.b)
