// 函数: sub_142c76ff0
// 地址: 0x142c76ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0xd3].d != 1
char* rsi = arg2
void* arg_18 = nullptr

if (cond:0)
    goto label_142c77099

char arg_8

if ((*(arg1[0x87] + 0x80) & 1) != 0)
    int32_t result
    result, arg2, arg3 = sub_142c5b310(arg1, 0, &arg_8, arg3)
    
    if (result != 0 && result != 0x51)
        return result

if ((*(arg1[0x87] + 0x80) & 1) != 0 && arg_8 == 0)
    return 0

arg2.b = 0x72
int32_t rax_2
rax_2, arg4 = sub_142c77ba0(arg1, arg2.b, &data_1436b70f8, 0xf)
int32_t rdi_1 = rax_2

if (rax_2 == 0)
    arg1[0xd3].d = 2
label_142c77099:
    int32_t rax_4 = sub_142c77a00(arg1, &arg_18, arg3, arg4)
    rdi_1 = rax_4
    
    if (rax_4 == 0 || rax_4 == 0x51)
        void* rcx_3 = arg_18
        
        if (rcx_3 == 0)
            return 0
        
        int32_t rdx_1 = arg1[0xd3].d
        
        if (rdx_1 != 2)
            if (rdx_1 != 3)
                arg1[0xdc] = 0
                return 0
            
            if (*(rcx_3 + 9) != 0)
                sub_142c65340(arg1, rdx_1 - 2)
                return 0x43
            
            *(arg1 + 0x6bc) = *(rcx_3 + 0x20)
            arg1[0xd3].d = 4
            *rsi = 1
            arg1[0xdc] = 0
            return 0
        
        if (*(rcx_3 + 9) != 0 || arg1[0xdc] u< 0x51)
            sub_142c65340(arg1, 1)
            return 7
        
        arg1[0xd6] = *(rcx_3 + 0x49)
        arg1[0xd7].d = *(rcx_3 + 0x34)
        int32_t rax_10 = sub_142c77ed0(arg1)
        rdi_1 = rax_10
        
        if (rax_10 == 0)
            arg1[0xd3].d = 3
            arg1[0xdc] = 0
            return 0

sub_142c65340(arg1, 1)
return zx.q(rdi_1)
