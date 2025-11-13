// 函数: sub_1421c3020
// 地址: 0x1421c3020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *(arg2 + 0x1a0)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t rdx = 0
int64_t rax = data_143f4e2b0
int64_t r15 = arg4
int64_t arg_8 = r13

if (rbx s> 0)
    int64_t r9 = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (r9 << 3)) == rax)
            break
        
        rdx += 1
        r9 += 1
        
        if (r9 s>= rbx)
            goto label_1421c30bd

void* r8_1

if (rbx s<= 0 || rdx == 0xffffffff)
label_1421c30bd:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_18 = *(arg1 + 0xe8)
    
    if ((rcx_18.b & 1) != 0)
        rcx_18 = (rcx_18 s>> 1) + arg1 + 0xe8
    
    r8_1 = rcx_18 + (sx.q(rdx) << 1)

char result = sub_1410e9550(arg2, &arg_8, r8_1, arg3)
int64_t* r12 = data_14395f4d0
void* rbx_1 = arg1 + 0x142

for (int64_t i = 0; i s< 4; )
    if (*(rbx_1 + 0x10) u> 0)
        uint32_t r14_1 = zx.d(*(rbx_1 + 0xe))
        result = (*(*r12 + 8))(r12)
        
        if (result == 0)
            void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_4 = &rcx_8[5]
            
            if (rax_4 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_4 = &rcx_8[5]
            
            *(arg2 + 0x30) = rax_4
            void**** rax_5 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_5 = rcx_8
            *(arg2 + 8) = &rcx_8[1]
            rcx_8[1] = 0
            result = -0x80
            *rcx_8 = &data_142d5a080
            rcx_8[2] = r13
            rcx_8[3].d = r14_1
            rcx_8[4] = r12
    
    int64_t r14_2 = *(r15 + (i << 3))
    
    if (*rbx_1 u> 0)
        uint32_t r15_1 = zx.d(*(rbx_1 - 2))
        void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_14[5]
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_14[5]
        
        *(arg2 + 0x30) = rax_7
        void**** rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_8 = rcx_14
        *(arg2 + 8) = &rcx_14[1]
        rcx_14[1] = 0
        result = 0x70
        rcx_14[3].d = r15_1
        r15 = arg4
        *rcx_14 = &data_142d5a070
        rcx_14[2] = r13
        rcx_14[4] = r14_2
    
    i += 1
    rbx_1 += 4

return result
