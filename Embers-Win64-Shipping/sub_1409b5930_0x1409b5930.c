// 函数: sub_1409b5930
// 地址: 0x1409b5930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = arg4
char rbp = arg3
TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cee4c0 s> *rbx_1)
    _Init_thread_header(&data_143cee4c0)
    
    if (data_143cee4c0 == 0xffffffff)
        atexit(sub_142cb9430)
        _Init_thread_footer(&data_143cee4c0)

int32_t rax_2 = data_143cee4bc
int32_t r14 = 0
data_143cee4b8 = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(&data_143cee4b0, 0)

int64_t var_48
int64_t* rax_3 = sub_1409c2bd0(arg1[5], &var_48, arg2)
int64_t rcx_1 = var_48
int32_t r12 = rax_3[1].d

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t rsi = 0

if (r12 s> 0)
    void* r15_1 = nullptr
    
    do
        sub_1409c2bd0(arg1[5], &var_48, arg2)
        int64_t rcx_3 = var_48
        int32_t* rax_4
        
        if (rsi s>= 0)
            rax_4 = r15_1 + rcx_3
        
        int32_t var_40
        
        if (rsi s< 0 || rsi s>= var_40)
            rax_4 = &data_143a1c6c8
        
        int32_t i = *rax_4
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int32_t* r8_2 = data_143cee4b0
        int64_t rbp_1 = sx.q(data_143cee4b8)
        int32_t* rax_5 = r8_2
        void* rdx_3 = &r8_2[rbp_1]
        
        if (r8_2 != rdx_3)
            while (*rax_5 != i)
                rax_5 = &rax_5[1]
                
                if (rax_5 == rdx_3)
                    goto label_1409b5a4f
        
        if (r8_2 == rdx_3 || ((rax_5 - r8_2) s>> 2).d == 0xffffffff)
        label_1409b5a4f:
            int32_t rax_8 = (rbp_1 + 1).d
            bool cond:2_1 = rax_8 s<= data_143cee4bc
            data_143cee4b8 = rax_8
            
            if (not(cond:2_1))
                sub_1405a4cf0(&data_143cee4b0)
                r8_2 = data_143cee4b0
            
            r8_2[rbp_1] = i
        
        rsi += 1
        r15_1 += 4
    while (rsi s< r12)
    
    rbp = arg3
    r15 = arg4

int64_t* result = sub_1409b6930(arg1, &data_143cee4b0, rbp, r15, arg5, arg6)

if (rbp != 0)
    return result

if (data_143cee4d8 s> *rbx_1)
    _Init_thread_header(&data_143cee4d8)
    
    if (data_143cee4d8 == 0xffffffff)
        atexit(sub_142cb82f0)
        _Init_thread_footer(&data_143cee4d8)

int32_t rcx_5 = data_143cee4d4

if (rcx_5 s< 0)
    data_143cee4d0 = 0
    
    if (rcx_5 != 0)
        sub_1405dadb0(&data_143cee4c8, 0)
        rcx_5 = data_143cee4d4
        r14 = data_143cee4d0

data_143cee4d0 = r14 + 1

if (r14 + 1 s> rcx_5)
    sub_1405a4cf0(&data_143cee4c8)

*(data_143cee4c8 + (sx.q(r14) << 2)) = arg2
return sub_1409b5be0(arg1, &data_143cee4c8, r15)
