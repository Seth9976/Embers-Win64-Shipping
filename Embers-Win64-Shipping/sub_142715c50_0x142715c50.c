// 函数: sub_142715c50
// 地址: 0x142715c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rax = sub_14272a610()

if (rax == 0)
    return 

int64_t rdx = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax << 3)) != rdx)
    return 

int64_t* rdi_1 = *(arg1 + 0xa0)

if (rdi_1 == 0)
    return 

rax = (*(*rdi_1 + 0x150))(rdi_1)

if (rax == 0)
    return 

rax = sub_1426fbdd0(rax)

if (rax == 0)
    return 

sub_142715f90(rax, rdi_1, arg2)
int64_t* r12_1 = *(arg1 + 0xb8)
int32_t r14_1 = 0
int64_t* rdi_2 = r12_1
void* r15_1 = &r12_1[sx.q(*(arg1 + 0xc0))]

if (r12_1 != r15_1)
    do
        int64_t rsi_1
        
        if (*rdi_2 == 0)
            rsi_1 = 0
        else
            void* rax_3 = sub_14272a610()
            
            if (rax_3 == 0)
                rsi_1 = 0
            else
                rsi_1 = *rdi_2
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rsi_1 + 0x38) || *(*(rsi_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rsi_1 = 0
        
        void* rax_6 = sub_14272a610()
        void* rax_9
        
        if (rax_6 == 0)
            rax_9 = nullptr
        else
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s> *(arg2 + 0x38))
                rax_9 = nullptr
            else
                rax_9 = arg2
                
                if (*(*(arg2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rax_9 = nullptr
        
        if (rsi_1 == rax_9)
            int32_t rdi_4 = ((rdi_2 - r12_1) s>> 3).d
            
            if (rdi_4 != 0xffffffff)
                int32_t rdx_4 = *(arg1 + 0xc0)
                int32_t rax_12 = rdx_4 - rdi_4 - 1
                
                if (rax_12 s>= 1)
                    rax_12 = 1
                
                if (rax_12 != 0)
                    int64_t rcx_6 = *(arg1 + 0xb8)
                    memcpy(rcx_6 + (sx.q(rdi_4) << 3), rcx_6 + (sx.q(rdx_4 - rax_12) << 3), 
                        rax_12 << 3)
                    rdx_4 = *(arg1 + 0xc0)
                
                *(arg1 + 0xc0) = rdx_4 - 1
            
            break
        
        rdi_2 = &rdi_2[1]
    while (rdi_2 != r15_1)

*(arg1 + 0xb0) &= 0xfffffffd

if (*(arg1 + 0xc0) s> 0)
    r14_1 = 2

*(arg1 + 0xb0) |= r14_1
