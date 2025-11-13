// 函数: sub_140ff81a0
// 地址: 0x140ff81a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1d88) = *(arg2 + 0x58)
*(arg1 + 0x1d98) = *(arg2 + 0x68)
int64_t rdx = *(arg2 + 0x78)

if (*(arg1 + 0x1d80) != rdx)
    *(arg1 + 0x1d80) = rdx
    int64_t* rcx = *(arg1 + 0x170)
    (*(*rcx + 0x88))(rcx)

int64_t rdx_1 = *(arg2 + 0x80)

if (*(arg1 + 0x1990) != rdx_1)
    int64_t* rcx_1 = *(arg1 + 0x170)
    *(arg1 + 0x1990) = rdx_1
    (*(*rcx_1 + 0x58))(rcx_1, rdx_1, 0, 0)

int64_t rdx_2 = *(arg2 + 0x88)

if (*(arg1 + 0x19b0) != rdx_2)
    int64_t* rcx_2 = *(arg1 + 0x170)
    *(arg1 + 0x19b0) = rdx_2
    (*(*rcx_2 + 0x48))(rcx_2, rdx_2, 0, 0)

int64_t rdx_3 = *(arg2 + 0x90)

if (*(arg1 + 0x1998) != rdx_3)
    int64_t* rcx_3 = *(arg1 + 0x170)
    *(arg1 + 0x1998) = rdx_3
    (*(*rcx_3 + 0x1e0))(rcx_3, rdx_3, 0, 0)

int64_t rdx_4 = *(arg2 + 0x98)

if (*(arg1 + 0x19a0) != rdx_4)
    int64_t* rcx_4 = *(arg1 + 0x170)
    *(arg1 + 0x19a0) = rdx_4
    (*(*rcx_4 + 0x200))(rcx_4, rdx_4, 0, 0)

int64_t rdx_5 = *(arg2 + 0xa0)

if (*(arg1 + 0x19a8) != rdx_5)
    int64_t* rcx_5 = *(arg1 + 0x170)
    *(arg1 + 0x19a8) = rdx_5
    (*(*rcx_5 + 0xb8))(rcx_5, rdx_5, 0, 0)

char rax

if (*(arg2 + 0x90) == 0 || *(arg2 + 0x98) == 0)
    rax = 0
else
    rax = 1

*(arg1 + 0x43bd) = rax
*(arg1 + 0x43bc) = 1

if (data_143f0f224 != 0)
    EnterCriticalSection(arg1 + 0x17cb8)

sub_14081d930((zx.q(*(arg1 + 0x17cb0)) << 3) + 0x4430 + arg1, arg2)
*(arg1 + 0x17cb0) = (*(arg1 + 0x17cb0) + 1) u% 0x2710

if (data_143f0f224 != 0)
    LeaveCriticalSection(arg1 + 0x17cb8)

int64_t i_1 = 6
*(arg1 + 0x4398) = -1
void* rdi = arg1 + 0x40f8
*(arg1 + 0x43a0) = 0xffff
int64_t i

do
    int64_t j_1 = 0xe
    int64_t j
    
    do
        int64_t* rbx_1 = *rdi
        *rdi = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_10
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_10 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rbx_1)
        
        rdi += 8
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143e2c0a4 s> result)
    result = _Init_thread_header(&data_143e2c0a4)
    
    if (data_143e2c0a4 == 0xffffffff)
        data_143e2c0a0 = sub_140fe5280()
        result = _Init_thread_footer(&data_143e2c0a4)

if (data_143e2b8ec == 0 && data_143e2c0a0 == 0)
    return result

return sub_140fddb20(arg1 - 0x18)
