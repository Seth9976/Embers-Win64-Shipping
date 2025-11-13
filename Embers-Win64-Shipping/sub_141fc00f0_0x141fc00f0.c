// 函数: sub_141fc00f0
// 地址: 0x141fc00f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x140)
int32_t r12 = arg2
int64_t* var_68 = nullptr
int32_t rsi = 0
uint64_t i_1 = 0
int32_t var_5c = 0
int64_t* result_1
sub_1424365b0(rcx, &result_1)
int32_t var_70
uint64_t rax = zx.q(var_70)
int64_t* r15 = nullptr
void* r8

while (true)
    int64_t* result_4 = result_1
    
    if (rax.d s< 0 || rax.d s>= result_4[1].d)
        rcx.b = 0
    else
        rcx.b = 1
    
    if (rcx.b == 0)
        break
    
    int64_t rax_2
    rax_2, rcx, r8 = sub_140d3c6e0(*result_4 + (sx.q(rax.d) << 3))
    int64_t rdi_1 = sx.q(i_1.d)
    i_1 = zx.q((rdi_1 + 1).d)
    int32_t i_2 = i_1.d
    
    if (i_1.d s> rsi)
        rcx, r8 = sub_1405a4d70(&var_68)
        rsi = var_5c
        i_1 = zx.q(i_2)
        r15 = var_68
    
    r15[rdi_1] = rax_2
    rax = zx.q(var_70 + 1)
    var_70 = rax.d

void* r10 = arg1

if (*(r10 + 0xcf8) s> 1)
    rax, r8 = sub_141faa960(r10, 0)
    r10 = arg1

if (i_1.d s> 0)
    int64_t* rdi_2 = r15
    int64_t* arg_18 = r15
    uint64_t i_3 = i_1
    uint64_t i
    
    do
        int64_t* rcx_5 = *rdi_2
        
        if (rcx_5 != 0)
            r8.b = 1
            rax, r8 = sub_141dbe590(rcx_5, 1, r8.b)
            void* const r13_1 = *rdi_2
            
            if (r13_1 == 0)
                r13_1 = nullptr
            else
                void* rax_4 = sub_14256a090()
                void* rdx_2 = *(r13_1 + 0x10)
                rax = sx.q(*(rax_4 + 0x38))
                
                if (rax.d s> *(rdx_2 + 0x38))
                    r13_1 = nullptr
                else if (*(*(rdx_2 + 0x30) + (rax << 3)) != rax_4 + 0x30)
                    r13_1 = nullptr
            
            r10 = arg1
            int64_t rcx_7 = sx.q(*(r10 + 0xcf8))
            
            if (rcx_7.d != 0)
                int32_t r12_1 = 0
                int32_t rdi_3 = 0
                int64_t rbx = 0
                r15.b = **(r10 + 0xcf0) != r13_1
                
                do
                    int64_t r9_1 = sx.q(rdi_3)
                    rbx += 1
                    rdi_3 += 1
                    
                    if (rbx s< rcx_7)
                        int64_t* rcx_8 = *(r10 + 0xcf0) + (rbx << 3)
                        
                        do
                            rax.b = *rcx_8 != r13_1
                            
                            if (zx.d(r15.b) != rax.d)
                                break
                            
                            rdi_3 += 1
                            rbx += 1
                            rcx_8 = &rcx_8[1]
                        while (rbx s< rcx_7)
                    
                    int32_t rsi_2 = rdi_3 - r9_1.d
                    
                    if (r15.b != 0)
                        if (r12_1 != r9_1.d)
                            int64_t rcx_9 = *(r10 + 0xcf0)
                            rax, r8 =
                                memmove(rcx_9 + (sx.q(r12_1) << 3), rcx_9 + (r9_1 << 3), rsi_2 << 3)
                            r10 = arg1
                        
                        r12_1 += rsi_2
                    
                    r15.b ^= 1
                while (rbx s< rcx_7)
                
                rdi_2 = arg_18
                i_1 = i_3
                *(r10 + 0xcf8) = r12_1
        
        rdi_2 = &rdi_2[1]
        i = i_1
        i_1 -= 1
        arg_18 = rdi_2
        i_3 = i_1
    while (i != 1)
    r12 = arg2

bool cond:0 = *(r10 + 0xcfc) == 0
*(r10 + 0xcf8) = 0

if (not(cond:0))
    rax, r8 = sub_1405c5570(r10 + 0xcf0, 0)
    r10 = arg1

*(r10 + 0x768) = 0

if (r12 s< 0 || r12 s>= *(r10 + 0xc38))
    rax.b = 0
else
    rax.b = 1

int64_t* result
int64_t* (* var_58)(int64_t* arg1, int64_t arg2, int64_t arg3)

if (rax.b == 0)
    int64_t* rdi_4 = *(r10 + 0x770)
    *(r10 + 0x10c8) = 1
    var_58 = sub_141fbea90
    int32_t var_50_1 = 0
    result_1 = nullptr
    int64_t* result_2 = sub_140a84c80(0, 0x30, 0)
    result_1 = result_2
    int32_t var_70_1 = 3
    
    if (result_2 != 0)
        *result_2 = &data_14328f8a8
        sub_140d3a3a0(&result_2[1], arg1)
        *(result_2 + 0x10) = var_58.o
        result_2[4].d = r12
        result_2[5] = sub_140a387b0()
        *result_2 = &data_14328f900
    
    result = (*(*rdi_4 + 0xf0))(rdi_4, &result_1)
    
    if (var_70_1 == 0)
        result = result_1
    label_141fc043f:
        
        if (result != 0)
            result = sub_140a74f90(result)
    else
        int64_t* result_3 = result_1
        
        if (result_3 != 0)
            (*(*result_3 + 0x38))(result_3, 0)
            result = result_1
            
            if (result != 0)
                result = sub_140a84c80(result, 0, 0)
                result_1 = result
            
            int32_t var_70_2 = 0
            goto label_141fc043f
else
    result_1 = nullptr
    r8.b = 1
    var_70.q = 0
    var_58.o = result_1.o
    result = sub_142442a90(*(r10 + 0x140), *(r10 + 0xc30) + sx.q(r12) * 0x18, r8.b, &var_58)
int64_t* r14_3 = var_68

if (r14_3 == 0)
    return result

return sub_140a74f90(r14_3)
