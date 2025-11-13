// 函数: sub_141c535a0
// 地址: 0x141c535a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = data_143f34a18
int32_t arg_8 = 0
sub_140b34200("UnregisterSubmixBufferListener", r12)
int64_t* var_88
int64_t* var_78
int64_t* var_68
int64_t* rax_4
int32_t rdi

if (arg1[2].b == 0)
    int64_t rax_5 = sub_140d3c6e0(arg1 + 0x14)
    void var_60
    int64_t* rax_6 = sub_141c5eea0(*arg1, &var_60, rax_5)
    int64_t var_80 = 0
    sub_141c4d620(&var_78, &rax_6[1])
    
    if (var_78 != 0)
        var_80 = *rax_6
        *rax_6 = 0
    
    rax_4 = &var_80
    rdi = 0xc
else
    int64_t* rdx_1 = *(*arg1 + 0x7e0)
    int64_t rax_1 = *rdx_1
    int64_t* rax_2 = rdx_1[1]
    var_68 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 0xc) += 1
    
    int64_t var_90 = 0
    sub_141c4d620(&var_88, &var_68)
    int64_t rax_3 = var_90
    rdi = 3
    
    if (var_88 != 0)
        rax_3 = rax_1
    
    var_90 = rax_3
    rax_4 = &var_90

void* r13 = *rax_4
int64_t* r15 = rax_4[1]
rax_4[1] = 0
*rax_4 = 0
void* arg_10 = r13

if ((rdi.b & 8) != 0)
    int64_t* rcx_5 = var_78
    rdi &= 0xfffffff7
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            int64_t* rbx_2 = var_78
            (**rbx_2)(rbx_2)
            int32_t rax_9 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_9 == 1)
                int64_t* rcx_7 = var_78
                (*(*rcx_7 + 8))(rcx_7, 1)

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    int64_t* var_58
    
    if (var_58 != 0)
        int32_t rax_11 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (rax_11 == 1 && var_58 != 0)
            (*(*var_58 + 8))(var_58, 1)

if ((rdi.b & 2) != 0)
    int64_t* rcx_9 = var_88
    rdi &= 0xfffffffd
    
    if (rcx_9 != 0)
        rcx_9[1].d -= 1
        
        if (rcx_9[1].d == 1)
            int64_t* rbx_3 = var_88
            (**rbx_3)(rbx_3)
            int32_t rax_15 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_15 == 1)
                int64_t* rcx_11 = var_88
                (*(*rcx_11 + 8))(rcx_11, 1)

if ((rdi.b & 1) != 0)
    int64_t* rcx_12 = var_68
    
    if (rcx_12 != 0)
        int32_t rax_17 = *(rcx_12 + 0xc)
        *(rcx_12 + 0xc) -= 1
        
        if (rax_17 == 1)
            int64_t* rcx_13 = var_68
            (*(*rcx_13 + 8))(rcx_13, 1)

if (r13 != 0)
    int64_t r12_1 = arg1[1]
    void* lpCriticalSection = r13 + 0x2f0
    int64_t var_98_1 = r12_1
    EnterCriticalSection(lpCriticalSection)
    int64_t rcx_15 = sx.q(*(r13 + 0x2e8))
    void* r8_2 = r13
    
    if (rcx_15.d != 0)
        int32_t rbx_4 = 0
        int32_t rsi_1 = 0
        r13.b = **(r13 + 0x2e0) != r12_1
        int64_t rdi_1 = 0
        
        do
            int64_t r9_1 = sx.q(rsi_1)
            rdi_1 += 1
            rsi_1 += 1
            
            if (rdi_1 s< rcx_15)
                int64_t* rcx_16 = *(r8_2 + 0x2e0) + (rdi_1 << 3)
                
                do
                    int32_t rax_21
                    rax_21.b = *rcx_16 != r12_1
                    
                    if (zx.d(r13.b) != rax_21)
                        break
                    
                    rsi_1 += 1
                    rdi_1 += 1
                    rcx_16 = &rcx_16[1]
                while (rdi_1 s< rcx_15)
            
            int32_t r14_2 = rsi_1 - r9_1.d
            
            if (r13.b != 0)
                if (rbx_4 != r9_1.d)
                    int64_t rcx_17 = *(r8_2 + 0x2e0)
                    memmove(rcx_17 + (sx.q(rbx_4) << 3), rcx_17 + (r9_1 << 3), r14_2 << 3)
                    r8_2 = arg_10
                
                rbx_4 += r14_2
            
            r13.b ^= 1
        while (rdi_1 s< rcx_15)
        
        *(r8_2 + 0x2e8) = rbx_4
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)

if (r15 != 0)
    r15[1].d -= 1
    
    if (r15[1].d == 1)
        (**r15)(r15)
        int32_t r14_3 = *(r15 + 0xc)
        *(r15 + 0xc) -= 1
        
        if (r14_3 == 1)
            (*(*r15 + 8))(r15, zx.q(r14_3))

return sub_140b38680("UnregisterSubmixBufferListener", r12) __tailcall
