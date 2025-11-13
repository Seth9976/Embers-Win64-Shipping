// 函数: sub_141d5a8d0
// 地址: 0x141d5a8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x131) != 0)
    return 

TEB* gsbase

if (data_143f37a18 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f37a18)
    
    if (data_143f37a18 == 0xffffffff)
        sub_140b58170(&data_143f37a10, "Media", 1)
        _Init_thread_footer(&data_143f37a18)

uint32_t rax_3

if (data_143de5480 != 0)
    rax_3.b = GetCurrentThreadId() == data_143de5470

uint64_t rax

if (data_143de5480 == 0 || rax_3.b != 0)
    int64_t rbx_1 = data_143f37a10
    j_sub_140b3db50()
    rax = sub_140b407e0(&data_143de7d78, rbx_1)
else
    rax = sub_140b3dbe0(data_143f37a10)

if (rax == 0)
    return 

int64_t* rbx_2 = *(arg1 + 0x118)

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t var_18 = *(arg1 + 0x110)

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t* rax_6 = (*(*rax + 0x78))()
int64_t r8_2 = *rax_6
(*(r8_2 + 0x10))(rax_6, &var_18, r8_2)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        rax = zx.q(*(rbx_2 + 0xc))
        *(rbx_2 + 0xc) -= 1
        
        if (rax.d == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rbp_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rbp_1))

*(arg1 + 0x131) = 1
