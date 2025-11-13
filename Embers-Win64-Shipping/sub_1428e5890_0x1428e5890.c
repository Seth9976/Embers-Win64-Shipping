// 函数: sub_1428e5890
// 地址: 0x1428e5890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
int32_t var_58
int32_t rax = sub_1428e5bc0(&var_58, arg2)

if (rax == 0)
    sub_14289aa40(arg1, "Bad time value", rax + 0xe)
    return 0

void* rcx_2 = *(arg2 + 8)
int64_t rbp = sx.q(*arg2)
char r13 = *(rbp + rcx_2 - 1)
int32_t rax_4
int32_t var_54
int32_t var_50
int32_t var_48
int32_t var_44

if (arg2[1] != 0x18)
    char* const rdx_1 = &data_1437020ab
    
    if (r13 == 0x5a)
        rdx_1 = " GMT"
    
    char* const var_78_1 = rdx_1
    int32_t var_80_1 = var_44 + 0x76c
    int32_t var_88_1 = var_58
    int32_t var_90_1 = var_54
    int32_t var_98_1 = var_50
    rax_4 = sub_1428b6f70(arg1, "%s %2d %02d:%02d:%02d %d%s", &data_143514220 + (sx.q(var_48) << 2))
else
    void* r15_1 = nullptr
    int32_t rsi_1 = 0
    
    if (rbp.d s> 0xf && *(rcx_2 + 0xe) == 0x2e)
        r15_1 = rcx_2 + 0xe
        rsi_1 = 1
        
        if (rbp.d s> 0xf)
            int32_t i = 0xf
            void* rdi_1 = rcx_2 + 0xf
            
            do
                if (sub_1428e4710(sx.d(*rdi_1), 4) == 0)
                    break
                
                rsi_1 += 1
                i += 1
                rdi_1 += 1
            while (i s< rbp.d)
    
    char* const rdx = &data_1437020ab
    
    if (r13 == 0x5a)
        rdx = " GMT"
    
    char* const var_68_1 = rdx
    int32_t var_70_1 = var_44 + 0x76c
    void* var_78 = r15_1
    int32_t var_80 = rsi_1
    int32_t var_88 = var_58
    int32_t var_90 = var_54
    int32_t var_98 = var_50
    rax_4 =
        sub_1428b6f70(arg1, "%s %2d %02d:%02d:%02d%.*s %d%s", &data_143514220 + (sx.q(var_48) << 2))
int32_t r14
r14.b = rax_4 s> 0
return zx.q(r14)
