// 函数: sub_1427da200
// 地址: 0x1427da200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg4
sub_1427e5d10(arg1, *arg3)
int32_t* result = arg1[0xb]
int32_t arg_8
int32_t* result_1 = &arg_8
int64_t i = *r14
arg_8 = 0x1c5

if (result != 0)
    result_1 = result

for (; i != 0; i = *r14)
    sub_1427e4f10(arg1)
    int64_t* r8 = *arg1
    char rax = arg1[9].b
    int64_t i_1 = i
    uint64_t rcx_1 = zx.q(r8[2].d)
    char var_50_1 = 0
    
    if ((*(r8 + 0x14) & 0x7fffffff) u> rcx_1.d)
        result = r8[1]
        void* rdx_2 = &result[rcx_1 * 6]
        
        if (rdx_2 != 0)
            *rdx_2 = i_1.o
            *(rdx_2 + 0x10) = rax.q
        
        r8[2].d += 1
    else
        result = sub_1427e5380(r8, &i_1)
    
    bool cond:2_1 = arg1[9].b == 0
    int32_t rbp_1 = r14[1].d
    char* arg_20 = nullptr
    
    if (not(cond:2_1))
        void* rdx_3 = *arg1
        char const* const rdx_4
        
        if (*(rdx_3 + 0x10) == 0)
            rdx_4 = "bad__repx__name"
        else
            rdx_4 = *(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x18)
        
        int64_t* rcx_5 = arg1[5]
        result = (*(*rcx_5 + 0x10))(rcx_5, rdx_4, &arg_20)
        
        if (result.b != 0)
            char* rsi_1 = arg_20
            
            if (rsi_1 != 0 && *rsi_1 != 0)
                int32_t rdi = 0
                
                if (data_143b7af50 == 0)
                label_1427da36f:
                    result = arg3[2](arg1[6], zx.q(rbp_1), 0)
                else
                    char const (** rax_7)[0x8] = &data_143b7af50
                    
                    while (true)
                        if (physx::shdfnd::stricmp(*rax_7, rsi_1) == 0)
                            result = arg3[2](arg1[6], zx.q(rbp_1), 
                                zx.q(*(zx.q(rdi) * 0x10 + 0x143b7af58)))
                            break
                        
                        rdi += 1
                        rax_7 = &(&data_143b7af50)[zx.q(rdi) * 2]
                        
                        if (*rax_7 == 0)
                            goto label_1427da36f
    
    void* rdx_8 = *arg1
    
    if (*(rdx_8 + 0x10) != 0)
        if (*(*(rdx_8 + 8) + zx.q(*(rdx_8 + 0x10) - 1) * 0x18 + 8) != 0
                && *(*(rdx_8 + 8) + zx.q(*(rdx_8 + 0x10) - 1) * 0x18 + 0x10) != 0)
            int64_t* rcx_11 = arg1[5]
            (*(*rcx_11 + 0x48))(rcx_11)
        
        result = *arg1
        result[4] -= 1
    
    void* rdx_9 = *arg1
    arg1[9].b = 1
    
    if (*(rdx_9 + 0x10) != 0)
        result = *(rdx_9 + 8)
        char rdx_10 = arg1[9].b
        
        if (result[zx.q(*(rdx_9 + 0x10) - 1) * 6 + 4].b == 0)
            rdx_10 = 0
        
        arg1[9].b = rdx_10
    
    *result_1 += 1
    r14 = &r14[2]

void* rdx_11 = *arg1

if (*(rdx_11 + 0x10) != 0)
    if (*(*(rdx_11 + 8) + zx.q(*(rdx_11 + 0x10) - 1) * 0x18 + 8) != 0
            && *(*(rdx_11 + 8) + zx.q(*(rdx_11 + 0x10) - 1) * 0x18 + 0x10) != 0)
        int64_t* rcx_15 = arg1[5]
        (*(*rcx_15 + 0x48))(rcx_15)
    
    result = *arg1
    result[4] -= 1

void* rdx_12 = *arg1
arg1[9].b = 1

if (*(rdx_12 + 0x10) != 0)
    result = *(rdx_12 + 8)
    char rdx_13 = arg1[9].b
    
    if (result[zx.q(*(rdx_12 + 0x10) - 1) * 6 + 4].b == 0)
        rdx_13 = 0
    
    arg1[9].b = rdx_13

return result
