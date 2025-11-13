// 函数: sub_141838020
// 地址: 0x141838020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x23])
(*(*arg1 + 0x60))(arg1)
int64_t* rcx_2 = arg1[0xae]
arg1[0x38] = arg2.q
(*(*rcx_2 + 0x10))(rcx_2, 3.40282347e+38f)
int64_t* rcx_3 = arg1[0xae]
arg1[0x36] = arg2.q
(*(*rcx_3 + 0x18))(rcx_3)
int64_t* rcx_4 = arg1[0xaf]
arg1[0x37] = arg2.q
(*(*rcx_4 + 0x10))(rcx_4, 3.40282347e+38f)
int64_t* rcx_5 = arg1[0xaf]
arg1[0x3b] = arg2.q
(*(*rcx_5 + 0x18))(rcx_5)
int64_t* rcx_6 = arg1[0xb0]
arg1[0x3c] = arg2.q
(*(*rcx_6 + 0x10))(rcx_6, 3.40282347e+38f)
int64_t* rcx_7 = arg1[0xb0]
arg1[0x3e] = arg2.q
(*(*rcx_7 + 0x18))(rcx_7)
int64_t* rcx_8 = arg1[0xb3]
arg1[0x3f] = arg2.q
int64_t rax_8 = (*(*rcx_8 + 0x20))(rcx_8)
int64_t* rcx_9 = arg1[0xb5]
arg1[0x34] = rax_8
int64_t rax_10 = (*(*rcx_9 + 0x28))(rcx_9)
int64_t* rcx_10 = arg1[0xb8]
arg1[0x3a] = rax_10
int64_t rax_12 = (*(*rcx_10 + 0x38))(rcx_10)
int64_t* rcx_11 = arg1[0xb7]
arg1[0x3a] += rax_12
int64_t rax_14 = (*(*rcx_11 + 0x88))(rcx_11)
int64_t* rcx_12 = arg1[0xb7]
arg1[0x3d] = rax_14
int32_t rax_16 = (*(*rcx_12 + 0x90))(rcx_12)
double zmm1 = arg1[0x36]
arg2 = zx.o(0)
arg1[0x40].d = rax_16

if (not(zmm1 <= 0.0))
    int64_t rax_17 = arg1[0x34]
    arg2 = zx.o(0)
    arg2[0] = float.d(rax_17)
    
    if (rax_17 s< 0)
        arg2[0] = arg2[0] + 1.8446744073709552e+19
    
    arg2[0] = arg2[0] / zmm1

int64_t* rcx_13 = arg1[0xac]
arg2 = _mm_cvtpd_ps(arg2)
arg1[0x39].d = arg2[0].d
(*(*rcx_13 + 0x50))(rcx_13, zmm1)
int64_t* rcx_14 = arg1[0xac]
*(arg1 + 0x29c) = arg2[0].d
int32_t rax_20 = (*(*rcx_14 + 0x58))(rcx_14)
int64_t* rcx_15 = arg1[0xac]
arg1[0x54].d = rax_20
(*(*rcx_15 + 0x60))(rcx_15)
int64_t* rcx_16 = arg1[0xac]
*(arg1 + 0x2a4) = arg2[0].d
int32_t rax_23 = (*(*rcx_16 + 0x68))(rcx_16)
int64_t* rcx_17 = arg1[0xac]
arg1[0x55].d = rax_23
int32_t rax_25 = (*(*rcx_17 + 0x48))(rcx_17)
uint64_t rcx_18 = zx.q(data_14401b1a0)
*(arg1 + 0x2ac) = rax_25
TEB* gsbase

if (data_143efa958 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_18 << 3))))
    _Init_thread_header(&data_143efa958)
    
    if (data_143efa958 == 0xffffffff)
        InitializeCriticalSection(&data_143efa930)
        SetCriticalSectionSpinCount(&data_143efa930, 0xfa0)
        atexit(sub_142cec060)
        _Init_thread_footer(&data_143efa958)

EnterCriticalSection(&data_143efa930)
int32_t result = LeaveCriticalSection(&data_143efa930)

if (arg1 != -0x118)
    result = LeaveCriticalSection(&arg1[0x23])

int64_t* rbx_1 = arg1[3]
int64_t* rsi = nullptr
int64_t rdx_1 = 0

if (rbx_1 != 0)
    result = 0
    bool z_1
    
    if (0 == rbx_1[1].d)
        rbx_1[1].d = 0
        z_1 = true
    else
        result = rbx_1[1].d
        z_1 = false
    
    if (z_1)
    label_141838273:
        rbx_1 = nullptr
    else
        while (true)
            bool z_2
            
            if (result == rbx_1[1].d)
                rbx_1[1].d = result + 1
                z_2 = true
            else
                result = rbx_1[1].d
                z_2 = false
            
            if (z_2)
                if (rbx_1 != 0)
                    rdx_1 = arg1[2]
                
                break
            
            result = 0
            bool z_3
            
            if (0 == rbx_1[1].d)
                rbx_1[1].d = 0
                z_3 = true
            else
                result = rbx_1[1].d
                z_3 = false
            
            if (z_3)
                goto label_141838273

int64_t var_18 = rdx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (arg1[0xa].d != 0)
    int64_t* rcx_21 = arg1[9]
    
    if (rcx_21 != 0)
        result = (*(*rcx_21 + 0x28))(rcx_21)
        
        if (result.b != 0)
            if (arg1[0xa].d != 0)
                rsi = arg1[9]
            
            result = (*(*rsi + 0x50))(rsi, &var_18)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        (**rbx_1)(rbx_1)
        result = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return result
