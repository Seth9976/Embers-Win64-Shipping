// 函数: sub_142337c70
// 地址: 0x142337c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int64_t rbx = sx.q(arg4)
void* rbp_1 = rdi * 0xb0 + *(arg1 + 0x100)
void* rcx = *(arg1 + 0x58)
char rax_1

if (rcx != 0)
    rax_1 = sub_142060c20(rcx, rbx.d)

int64_t rax_3

if (rcx == 0 || rax_1 == 0 || (*(*(arg1 + 0x110) + 0x104) & 1) == 0)
    void* rdx_1 = *(arg1 + 0x110)
    
    if (*(rdx_1 + 0x78) - *(rdx_1 + 0xa4) s> 0 && rbx.d s>= 0 && rbx.d s< *(rbp_1 + 0x98))
        int64_t* rcx_1 = *(*(rbp_1 + 0x90) + (rbx << 3))
        
        if (rcx_1 != 0)
            return (*(*rcx_1 + 0x10))(rcx_1)
    
    int64_t* r8
    void* r9_2
    
    if (*(rdx_1 + 0x68) s> 0)
        r8 = *(rdx_1 + 0x38)
        r9_2 = &r8[sx.q(*(rdx_1 + 0x40)) * 2]
    
    if (*(rdx_1 + 0x68) s<= 0 || r8 == r9_2)
    label_142337d66:
        rax_3 = *(rbp_1 + 0x60)
    else
        while (true)
            if (rdi.d s>= 0)
                void* rax_9 = *r8
                
                if (rdi.d s< *(rax_9 + 0x38))
                    void* rcx_4 = rdi * 0x30 + *(rax_9 + 0x30)
                    int32_t* rax_11 = *(rcx_4 + 0x18)
                    void* rdx_2 = &rax_11[sx.q(*(rcx_4 + 0x20))]
                    
                    if (rax_11 != rdx_2)
                        while (*rax_11 != rbx.d)
                            rax_11 = &rax_11[1]
                            
                            if (rax_11 == rdx_2)
                                goto label_142337d5d
                        
                        rax_3 = *(rbp_1 + 0x80)
                        break
            
        label_142337d5d:
            r8 = &r8[2]
            
            if (r8 == r9_2)
                goto label_142337d66
else
    rax_3 = *(rbp_1 + 0x70)

return *(rax_3 + (rbx << 3))
