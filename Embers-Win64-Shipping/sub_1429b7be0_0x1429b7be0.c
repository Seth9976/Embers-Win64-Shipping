// 函数: sub_1429b7be0
// 地址: 0x1429b7be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = -2
char* rbx = arg2

if (arg3 == 0)
    *arg5 = *(arg1 + 0x28)
    return 0

int32_t r13_1 = *arg4
int32_t i = arg4[1]
int32_t rsi_1 = *(arg1 + 0x50)

if (arg4[3] s<= rsi_1)
    rsi_1 = arg4[3]

int32_t arg_18 = rsi_1
int32_t r14_1 = *(arg1 + 0x4c)

if (arg4[2] s<= r14_1)
    r14_1 = arg4[2]

int64_t rdi_1 = *(arg1 + 0x20)
int64_t var_60_1 = rdi_1
void* var_68
sub_14297bd10(*(arg1 + 0x38), &var_68)
char* var_58
int64_t rax_3 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    *(arg1 + 0x38), &var_58)

if (var_68 != rax_3)
    int64_t r12_1 = 0
    int64_t rcx_11
    
    do
        int64_t* rsi_3 = *(arg1 + 0x40) + r12_1
        *rsi_3 = rdi_1
        rsi_3[1] = rdi_1
        rsi_3[2].d = sub_1429a63d0(*(var_68 + 0x120), r13_1, r14_1)
        *(rsi_3 + 0x14) = sub_1429a63d0(*(var_68 + 0x124), i, rsi_1)
        rsi_3[3].d = *(var_68 + 0x124)
        int32_t temp0_1 = divs.dp.d(sx.q(sub_1429a6580(*(var_68 + 0x11c))), sub_1429a6580(1))
        *(rsi_3 + 0x1c) = temp0_1
        rdi_1 = var_60_1 + (sx.q(temp0_1 * *(rsi_3 + 0x14) * rsi_3[2].d) << 1)
        var_60_1 = rdi_1
        sub_14297bb00(&var_68)
        r12_1 += 0x20
        rcx_11 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            *(arg1 + 0x38), &var_58)
    while (var_68 != rcx_11)
    rbx = arg2
    rsi_1 = arg_18

int32_t i_5 = 0

if (*(arg1 + 0x14) != 1)
    for (; i s<= rsi_1; i += 1)
        int32_t j = 0
        
        if (*(arg1 + 0x30) s> 0)
            int64_t r12_2 = 0
            
            do
                void* rsi_5 = *(arg1 + 0x40) + r12_2
                int32_t r8_4 = *(rsi_5 + 0x18)
                int32_t rcx_16
                
                if (i s< 0)
                    int32_t rax_34
                    
                    if (r8_4 s< 0)
                        rax_34 = not.d(r8_4) - i
                    else
                        rax_34 = r8_4 - i - 1
                    
                    rcx_16 = neg.d(divs.dp.d(sx.q(rax_34), r8_4))
                else
                    rcx_16 = divs.dp.d(sx.q(i), r8_4)
                
                if (i == rcx_16 * r8_4)
                    int64_t rdi_6 = sx.q(*(rsi_5 + 0x1c) * *(rsi_5 + 0x10)) * 2
                    memcpy(*(rsi_5 + 8), rbx, rdi_6.d)
                    rbx = &rbx[rdi_6]
                    *(rsi_5 + 8) += rdi_6
                
                j += 1
                r12_2 += 0x20
            while (j s< *(arg1 + 0x30))
            
            rsi_1 = arg_18
else
    for (; i s<= rsi_1; i += 1)
        int32_t j_1 = 0
        
        if (*(arg1 + 0x30) s> 0)
            int64_t rdi_4 = 0
            
            do
                void* r8_3 = *(arg1 + 0x40) + rdi_4
                int32_t r9 = *(r8_3 + 0x18)
                int32_t rcx_12
                
                if (i s< 0)
                    int32_t rax_24
                    
                    if (r9 s< 0)
                        rax_24 = not.d(r9) - i
                    else
                        rax_24 = r9 - i - 1
                    
                    rcx_12 = neg.d(divs.dp.d(sx.q(rax_24), r9))
                else
                    rcx_12 = divs.dp.d(sx.q(i), r9)
                
                if (i == rcx_12 * r9)
                    int32_t k = *(r8_3 + 0x1c) * *(r8_3 + 0x10)
                    
                    if (k s> 0)
                        uint16_t* r10_1 = *(r8_3 + 8)
                        
                        do
                            uint16_t rdx_11 = zx.w(*rbx)
                            rbx = &rbx[2]
                            *r10_1 = zx.w(rbx[1]) << 8 | rdx_11
                            *(r8_3 + 8) += 2
                            r10_1 = *(r8_3 + 8)
                            k -= 1
                        while (k s> 0)
                
                j_1 += 1
                rdi_4 += 0x20
            while (j_1 s< *(arg1 + 0x30))

char* rax_40 = j_sub_140a82f30(0x2000)
var_58 = rax_40
memset(rax_40, 0, 0x2000)
int64_t r9_2 = *(arg1 + 0x20)
int64_t r10_2 = sx.q(((var_60_1 - r9_2) s>> 1).d)
int32_t rax_43
rax_43.b = 0

if (r10_2 s> 0)
    int64_t r8_6 = 0
    
    do
        uint32_t rdx_17 = zx.d(*(r9_2 + (r8_6 << 1)))
        uint64_t rcx_22 = zx.q(rdx_17) u>> 3
        rax_40[rcx_22] |= (1 << ((rdx_17 & 7) u% 0x20)).b
        r8_6 += 1
    while (r8_6 s< r10_2)
    
    rax_43 = zx.d(*rax_40)

rax_43.b &= 0xfe
*rax_40 = rax_43.b
uint16_t rsi_6 = 0x1fff
uint16_t rbp_1 = 0
char* rdx_19 = rax_40

for (int32_t i_1 = 0; i_1 s< 0x2000; )
    if (*rdx_19 != 0)
        if (zx.d(rsi_6) s> i_1)
            rsi_6 = i_1.w
        
        if (zx.d(rbp_1) s< i_1)
            rbp_1 = i_1.w
    
    i_1 += 1
    rdx_19 = &rdx_19[1]

int16_t* rax_48 = j_sub_140a82f30(0x20000)
int16_t* var_48_1 = rax_48
memset(rax_48, 0, 0x20000)
int32_t r14_2 = 0
int32_t i_2 = 0
char rcx_24 = 1
int64_t r9_3 = 0
int16_t* rdx_20 = rax_48

do
    if (i_2 == 0 || (*((r9_3 s>> 3) + rax_40) & rcx_24) != 0)
        *rdx_20 = r14_2.w
        r14_2 += 1
    else
        *rdx_20 = 0
    
    i_2 += 1
    r9_3 += 1
    rcx_24 = rol.b(rcx_24, 1)
    rdx_20 = &rdx_20[1]
while (i_2 s< 0x10000)

r14_2.w -= 1
int64_t r8_8 = *(arg1 + 0x20)
int32_t rax_53 = ((var_60_1 - r8_8) s>> 1).d

if (rax_53 s> 0)
    int64_t i_3 = 0
    
    do
        *(r8_8 + (i_3 << 1)) = rax_48[zx.q(*(r8_8 + (i_3 << 1)))]
        i_3 += 1
    while (i_3 s< sx.q(rax_53))

char* r12_4 = *(arg1 + 0x28)
*r12_4 = rsi_6.b
r12_4[1] = (rsi_6 u>> 8).b
r12_4[2] = rbp_1.b
r12_4[3] = (rbp_1 u>> 8).b
void* r12_5 = &r12_4[4]

if (rsi_6 u<= rbp_1)
    uint32_t rcx_27 = zx.d(rbp_1) - zx.d(rsi_6)
    void* rdx_22 = &rax_40[zx.q(rsi_6)]
    int32_t i_6 = rcx_27 + 1
    
    if (rcx_27 != 0xffffffff)
        int32_t i_4
        
        do
            *r12_5 = *rdx_22
            r12_5 += 1
            rdx_22 += 1
            i_4 = i_6
            i_6 -= 1
        while (i_4 != 1)

if (*(arg1 + 0x30) s> 0)
    void* rcx_28 = nullptr
    var_68 = nullptr
    
    do
        void* rsi_8 = *(arg1 + 0x40) + rcx_28
        int32_t rbp_2 = 0
        int32_t r8_9 = *(rsi_8 + 0x1c)
        
        if (r8_9 s> 0)
            do
                int32_t rdx_23 = *(rsi_8 + 0x10)
                sub_1429c0b70(*rsi_8 + (sx.q(rbp_2) << 1), rdx_23, r8_9, *(rsi_8 + 0x14), 
                    rdx_23 * r8_9, r14_2.w)
                rbp_2 += 1
                r8_9 = *(rsi_8 + 0x1c)
            while (rbp_2 s< r8_9)
            
            rcx_28 = var_68
        
        i_5 += 1
        rcx_28 += 0x20
        var_68 = rcx_28
    while (i_5 s< *(arg1 + 0x30))

*r12_5 = 0
int16_t* rcx_31 = *(arg1 + 0x20)
int32_t rax_60 = sub_1429bbd60(rcx_31, ((var_60_1 - rcx_31) s>> 1).d, r12_5 + 4)
*r12_5 = rax_60.b
*(r12_5 + 1) = (rax_60 s>> 8).b
*(r12_5 + 2) = (rax_60 s>> 0x10).b
*(r12_5 + 3) = (rax_60 s>> 0x18).b
*arg5 = *(arg1 + 0x28)
int32_t r12_8 = (r12_5 + 4).d - *(arg1 + 0x28) + rax_60
j_sub_140a74f90(rax_48)
j_sub_140a74f90(rax_40)
return zx.q(r12_8)
