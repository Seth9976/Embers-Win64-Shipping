// 函数: sub_14202f1c0
// 地址: 0x14202f1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f40800 s> *rbx_1)
    _Init_thread_header(&data_143f40800)
    
    if (data_143f40800 == 0xffffffff)
        int64_t* rcx_18 = data_143db18d0
        
        if (rcx_18 == 0)
            sub_140a53c40()
            rcx_18 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_20 = (*(*rcx_18 + 0xb0))(rcx_18, u"r.FullScreenMode", r8_4)
        
        if (rax_20 != 0)
            int64_t rdx_5 = *rax_20
            rax_20 = (*(rdx_5 + 0x58))(rax_20, rdx_5)
        
        data_143f407f8 = rax_20
        _Init_thread_footer(&data_143f40800)

int32_t rcx
rcx.b = *data_143f407f8 != 0
int32_t arg_8 = rcx
int64_t* rcx_1 = *(arg1 + 0xb8)
char rax_4 = (*(*rcx_1 + 0xf0))(rcx_1)
int32_t rcx_2 = arg_8

if (rax_4 != 0)
    rcx_2 = 2

arg_8 = rcx_2

if (rcx_2 == 0)
    if (data_143f40808 s> *rbx_1)
        _Init_thread_header(&data_143f40808)
        
        if (data_143f40808 == 0xffffffff)
            sub_140af2b60()
            char rax_21 = sub_140b21a10(&data_143dbb3f0, u"d3d12")
            char rax_22
            
            if (rax_21 == 0)
                sub_140af2b60()
                rax_22 = sub_140b21a10(&data_143dbb3f0, u"dx12")
            
            if (rax_21 != 0 || rax_22 != 0)
                rax_22 = 1
            
            data_143f40804 = rax_22
            _Init_thread_footer(&data_143f40808)
    
    int32_t rax_6 = arg_8
    
    if (data_143f40804 != 0)
        rax_6 = 1
    
    arg_8 = rax_6

void* rbx_2 = data_143f5b298
int32_t rcx_3 = data_143a30330
int32_t rdx_1 = data_143a30334
int32_t arg_10 = rcx_3
int32_t arg_18 = rdx_1

if (rbx_2 == 0)
    sub_1423ee5e0(rcx_3, rdx_1, arg_8)
else
    void* rax_7 = sub_1424ad0c0()
    void* rcx_4 = *(rbx_2 + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    int64_t* rax_10
    
    if (rax_8.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
        rax_10 = sub_1423dd380(rbx_2)
    
    if (rax_8.d s> *(rcx_4 + 0x38) || *(*(rcx_4 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30
            || rax_10 == 0)
        sub_1423ee5e0(arg_10, arg_18, arg_8)
    else
        arg_10 = rax_10[0x10].d
        arg_18 = *(rax_10 + 0x84)
        sub_1420019f0(&arg_10, &arg_18, &arg_8, 1)
        int32_t rcx_9 = arg_10
        int32_t rax_11 = arg_18
        
        if (rax_10[0x10].d != rcx_9 || *(rax_10 + 0x84) != rax_11)
            rax_10[0x10].d = rcx_9
            *(rax_10 + 0x84) = rax_11
            sub_1420435c0(rax_10)
        
        int32_t rcx_11 = arg_8
        
        if (rax_10[0x13].d != rcx_11)
            if (rcx_11 == 0)
                rax_10[0x13].d = 0
            else if (rcx_11 == 1)
                rax_10[0x13].d = 1
            else
                rax_10[0x13].d = 2
            
            sub_1420435c0(rax_10)
        
        (*(*rax_10 + 0x270))(rax_10)
        (*(*rax_10 + 0x260))(rax_10, 0)

int64_t r14
r14.b = arg_8 != 2
char rbp = 0
*(arg1 + 0x2d4) += 1
int32_t rax_14 = *(arg1 + 0x2c8)
int32_t rcx_15 = *(arg1 + 0x2d4)
int64_t rdi = sx.q(rax_14 - 1)

if (rax_14 - 1 s>= 0)
    int64_t rbx_5 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_16 = *(arg1 + 0x2c0)
        
        if (*(rbx_5 + rax_16 + 8) == 0)
            rbp = 1
        else
            int64_t* rcx_16 = *(rbx_5 + rax_16)
            
            if (rcx_16 == 0)
                rbp = 1
            else if ((*(*rcx_16 + 0x50))(rcx_16, zx.q(r14.b)) == 0)
                rbp = 1
        
        rbx_5 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_15 = *(arg1 + 0x2d4)

*(arg1 + 0x2d4) = rcx_15 - 1

if (rbp != 0)
    sub_140599630(arg1 + 0x2c0, 0)

int32_t result
result.b = 1
return result
