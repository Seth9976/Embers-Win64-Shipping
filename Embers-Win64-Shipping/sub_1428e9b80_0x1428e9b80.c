// 函数: sub_1428e9b80
// 地址: 0x1428e9b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int32_t rsi = 0
int32_t arg_20 = 0
int32_t r15_1 = arg4 & 0xffff7fff
uint64_t r13 = arg3
void* rbx = arg1
int32_t rbp = 0
uint64_t (* rax)(int64_t arg1, uint64_t arg2, int64_t arg3, int64_t arg4)
int32_t r14

if (arg5 == 1)
    r14 = 0x16
    arg_20 = 0x30
    rax = sub_1428e9ed0
else if (arg5 != 2)
    r14 = 4
    rax = sub_1428e9e50
else
    arg_20 = 0xd
    
    if (arg3 u> 1 && *arg2 == 0x2e)
        r15_1 |= 0x8000
    
    rax = sub_1428e9fa0
    r14 = 0x16
    
    if ((r15_1.b & 2) == 0)
        rax = sub_1428ea060

if (arg3 == 0)
    int32_t i = 0
    char* rcx = arg2
    
    if (*arg2 != 0)
        while (i u< 0x80000000)
            rcx = &rcx[1]
            i += 1
            
            if (*rcx == 0)
                break
    
    r13 = zx.q(i) & 0x7fffffff

int32_t* rax_1 = sub_1428ac7d0(rbx, 0x55, nullptr, nullptr)

if (rax_1 == 0)
    goto label_1428e9d17

int32_t rbx_1 = 0
uint64_t var_70
char** var_68

if (sub_142898c70(rax_1) s> 0)
    int32_t rax_5
    
    do
        int32_t* rax_3 = sub_142898ea0(rax_1, rbx_1)
        
        if (*rax_3 == arg5)
            var_68 = arg6
            rsi = 1
            var_70 = r13
            int32_t rax_4 = sub_1428e9a20(*(rax_3 + 8), r14, rax, r15_1, arg2, var_70, var_68)
            rbp = rax_4
            
            if (rax_4 != 0)
                break
        
        rbx_1 += 1
        rax_5 = sub_142898c70(rax_1)
    while (rbx_1 s< rax_5)

sub_1428e7a10(rax_1)

if (rbp != 0)
    return zx.q(rbp)

if (rsi == 0 || (r15_1.b & 1) != 0)
    rbx = arg1
label_1428e9d17:
    int32_t r14_1 = arg_20
    
    if (r14_1 != 0 && (r15_1.b & 0x20) == 0)
        int64_t* rax_7 = sub_1428a3930(rbx)
        int32_t i_3 = sub_1428e73d0(rax_7, r14_1, 0xffffffff)
        int32_t i_2 = i_3
        
        if (i_3 s>= 0)
            int32_t i_1
            
            do
                int32_t* rax_9 = sub_1428e7030(sub_1428e7380(rax_7, i_2))
                
                if (*(rax_9 + 8) != 0 && *rax_9 != 0)
                    char* var_58
                    int32_t rax_10 = sub_1428f6be0(&var_58, rax_9)
                    
                    if (rax_10 s< 0)
                        return -1
                    
                    int64_t rsi_1 = sx.q(rax_10)
                    char* var_78
                    var_78.d = r15_1
                    int32_t rax_11 = rax(var_58, rsi_1, arg2, r13, var_78, var_70, var_68)
                    
                    if (rax_11 s> 0)
                        if (arg6 != 0)
                            *arg6 = sub_1428a6c10(var_58, rsi_1, "crypto\x509v3\v3_utl.c", 0x32c)
                        
                        r14_1 = arg_20
                    
                    sub_1428a6780(var_58)
                    
                    if (rax_11 != 0)
                        return zx.q(rax_11)
                
                i_1 = sub_1428e73d0(rax_7, r14_1, i_2)
                i_2 = i_1
            while (i_1 s>= 0)

return 0
