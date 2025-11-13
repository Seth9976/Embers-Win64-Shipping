// 函数: sub_141df1510
// 地址: 0x141df1510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0xffffffff)
    return 

int64_t rax_2 = *arg2
arg2[0x12] = sx.q(arg3 + arg4)
int32_t* rbx_2 = sx.q(arg4) + *(arg1 + 0x38)
(*(rax_2 + 0x150))(arg2, rbx_2, 4)
int32_t r8_1 = *rbx_2
void* rbx_3 = &rbx_2[1]
uint64_t i_9 = zx.q(r8_1) & 0xffffff
uint64_t rax_5 = zx.q(r8_1 s>> 0x1c) & 0xf
int32_t i_10 = i_9.d
int32_t rdx_1 = rax_5.d
uint32_t j_2 = 1
int64_t r13_1 = sx.q(*((rax_5 << 2) + 0x143240f38))
uint32_t rax = zx.d(*((zx.q((rax_5 << 3).d) | (zx.q((zx.q(r8_1) s>> 0x18).d) & 7)) + 0x143240fb8))

if (rdx_1 != 3)
    j_2 = rax

uint32_t i_11 = 0

if (rdx_1 == 3)
    i_11 = rax

if (i_11 != 0)
    uint64_t i_7 = zx.q(i_11)
    uint64_t i
    
    do
        (*(*arg2 + 0x150))(arg2, rbx_3, 4)
        rbx_3 += 4
        i = i_7
        i_7 -= 1
    while (i != 1)

if (i_9.d != 0)
    uint64_t i_1
    
    do
        if (j_2 != 0)
            uint64_t j_1 = zx.q(j_2)
            uint64_t j
            
            do
                (*(*arg2 + 0x150))(arg2, rbx_3, r13_1)
                rbx_3 += r13_1
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i_1 = i_9
        i_9 -= 1
    while (i_1 != 1)
    i_9 = zx.q(i_10)

if ((r8_1 & 0x8000000) != 0)
    int32_t i_13 = ((rbx_3 + 3).d & 0xfffffffc) - rbx_3.d
    int64_t i_14
    
    if ((arg2[5].b & 2) == 0)
        i_14 = sx.q(i_13)
        (*(*arg2 + 0x150))(arg2, rbx_3, i_14)
    else
        i_10.b = 0x55
        
        if (i_13 s> 0)
            uint64_t i_6 = zx.q(i_13)
            uint64_t i_2
            
            do
                (*(*arg2 + 0x150))(arg2, &i_10, 1)
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        i_14 = sx.q(i_13)
    
    rbx_3 += i_14
    
    if (i_9.d != 0)
        uint64_t i_8 = zx.q(i_9.d)
        int64_t r14_1
        r14_1.b = *(arg1 + 8) s> 0xff
        uint64_t i_3
        
        do
            (*(*arg2 + 0x150))(arg2, rbx_3, r14_1 + 1)
            rbx_3 += r14_1 + 1
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)

int32_t i_12 = ((rbx_3 + 3).d & 0xfffffffc) - rbx_3.d

if ((arg2[5].b & 2) == 0)
    (*(*arg2 + 0x150))(arg2, rbx_3, sx.q(i_12))
    return 

i_10.b = 0x55

if (i_12 s<= 0)
    return 

uint64_t i_5 = zx.q(i_12)
uint64_t i_4

do
    (*(*arg2 + 0x150))(arg2, &i_10, 1)
    i_4 = i_5
    i_5 -= 1
while (i_4 != 1)
