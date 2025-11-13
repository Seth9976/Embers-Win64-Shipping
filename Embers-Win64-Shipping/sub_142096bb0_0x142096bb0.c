// 函数: sub_142096bb0
// 地址: 0x142096bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg2
int64_t* rsi = arg1
int64_t* rax

if (arg1[8].d != 0)
    arg2.b = 1
    rax, arg1 = (*(*arg1 + 0x288))(arg1, arg2)

void* rbp = nullptr
rsi[5] = r14
rsi[6] = arg3
int32_t arg_8 = 0

if (*(r14 + 0x38) s> 0)
    int64_t r13_1 = 0
    int64_t arg_10 = 0
    
    do
        void* rdi_1 = *(*(r14 + 0x30) + r13_1)
        int64_t* rdi_2
        
        if (*(rdi_1 + 0x48) == 0)
            rdi_2 = nullptr
        else
            void* rax_3 = sub_1424d1860()
            
            if (rax_3 == 0)
                rdi_2 = nullptr
            else
                rdi_2 = *(rdi_1 + 0x48)
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> rdi_2[7].d || *(rdi_2[6] + (rax_4 << 3)) != rax_3 + 0x30)
                    rdi_2 = nullptr
        
        if ((1 & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(rsi, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rax_7 = sub_140d2dfc0(rdi_2, rsi, 0, 8, 0, 0, 0, 0, 0)
        int64_t rdi_3 = sx.q(rsi[8].d)
        int32_t rcx_3 = (rdi_3 + 1).d
        rsi[8].d = rcx_3
        
        if (rcx_3 s> *(rsi + 0x44))
            sub_1405a4d70(&rsi[7])
        
        *(rsi[7] + (rdi_3 << 3)) = rax_7
        (*(*rax_7 + 0x270))(rax_7, *(*(r14 + 0x30) + r13_1))
        r13_1 += 8
        arg1 = zx.q(arg_8 + 1)
        arg_8 = arg1.d
    while (arg1.d s< *(r14 + 0x38))
    
    r14 = rsi[5]

int64_t i_1 = sx.q(*(r14 + 0x38))
arg1.b = 0

if (i_1 s<= 0)
    return 

int64_t* rdx_5 = *(r14 + 0x30)
int64_t i

do
    rax = *rdx_5
    rdx_5 = &rdx_5[1]
    arg1 = zx.q(arg1.b)
    
    if ((rax[0xd].b & 0x10) != 0)
        arg1 = 1
    
    i = i_1
    i_1 -= 1
while (i != 1)

if (arg1.b == 0)
    return 

void* rbx_1 = rsi[6]

if (rbx_1 == 0)
    return 

int32_t rax_9 = *(rbx_1 + 0xc)

if (rax_9 s< data_143e1d9b4)
    int16_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rax_9)
    uint32_t rdx_7 = zx.d(temp1_1)
    int32_t rax_11 = temp2_1 + rdx_7
    rbp = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(zx.d(rax_11.w) - rdx_7) * 0x18

if ((1 & (*(rbp + 8) u>> 0x1d).b) != 0)
    return 

rax = sub_140d21950(rbx_1, sub_142545970())

if (rax != 0)
    int64_t r8 = *rax
    (*(r8 + 0x40))(rax, rsi[5], r8)
