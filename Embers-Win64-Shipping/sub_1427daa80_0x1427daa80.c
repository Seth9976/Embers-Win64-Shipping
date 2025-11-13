// 函数: sub_1427daa80
// 地址: 0x1427daa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg4
sub_1427e5d10(arg1, *arg3)
int32_t* result = arg1[0xc]
int32_t rbp = 0

if (result != 0)
    rbp = *result

int64_t i = *rsi

if (i != 0)
    int32_t rbp_1 = rbp + 0xcc
    
    do
        sub_1427e4f10(arg1)
        int64_t* r8 = *arg1
        char rax = arg1[9].b
        int64_t i_1 = i
        uint64_t rcx_1 = zx.q(r8[2].d)
        char var_50_1 = 0
        
        if ((*(r8 + 0x14) & 0x7fffffff) u> rcx_1.d)
            int128_t* rdx_2 = r8[1] + rcx_1 * 0x18
            
            if (rdx_2 != 0)
                *rdx_2 = i_1.o
                rdx_2[1].q = rax.q
            
            r8[2].d += 1
        else
            sub_1427e5380(r8, &i_1)
        
        int32_t var_38_1 = rsi[1].d
        int64_t* var_30_1 = arg3
        char var_40 = 1
        int32_t var_3c_1 = rbp_1
        void arg_8
        result = sub_1427d9250(arg1, &arg_8, &var_40, arg5)
        void* rdx_4 = *arg1
        
        if (*(rdx_4 + 0x10) != 0)
            if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x18 + 8) != 0
                    && *(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x18 + 0x10) != 0)
                int64_t* rcx_7 = arg1[5]
                (*(*rcx_7 + 0x48))(rcx_7)
            
            result = *arg1
            result[4] -= 1
        
        void* rdx_5 = *arg1
        arg1[9].b = 1
        
        if (*(rdx_5 + 0x10) != 0)
            result = *(rdx_5 + 8)
            char rdx_6 = arg1[9].b
            
            if (result[zx.q(*(rdx_5 + 0x10) - 1) * 6 + 4].b == 0)
                rdx_6 = 0
            
            arg1[9].b = rdx_6
        
        i = rsi[2]
        rsi = &rsi[2]
        rbp_1 += 0x10
    while (i != 0)

void* rdx_7 = *arg1

if (*(rdx_7 + 0x10) != 0)
    if (*(*(rdx_7 + 8) + zx.q(*(rdx_7 + 0x10) - 1) * 0x18 + 8) != 0
            && *(*(rdx_7 + 8) + zx.q(*(rdx_7 + 0x10) - 1) * 0x18 + 0x10) != 0)
        int64_t* rcx_11 = arg1[5]
        (*(*rcx_11 + 0x48))(rcx_11)
    
    result = *arg1
    result[4] -= 1

void* rdx_8 = *arg1
arg1[9].b = 1

if (*(rdx_8 + 0x10) != 0)
    result = *(rdx_8 + 8)
    char rdx_9 = arg1[9].b
    
    if (result[zx.q(*(rdx_8 + 0x10) - 1) * 6 + 4].b == 0)
        rdx_9 = 0
    
    arg1[9].b = rdx_9

return result
