// 函数: sub_141889bc0
// 地址: 0x141889bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
int64_t var_78 = 0
int32_t var_50 = 0
void* rsi = arg1
int64_t* rcx = *(arg1 + 0x40)
int32_t r15 = 0
int64_t* var_60 = nullptr
int32_t r13 = 0
int32_t i_6 = 0
int32_t var_6c = 0
(*(*rcx + 0x1a0))(rcx, &var_60)
int64_t rbp = 0
int64_t* i_3 = sub_14183e350(rsi + 0x18)
int64_t* rdi = var_60
int64_t* i = i_3
void* rax_3 = &rdi[sx.q(i_6) * 2]
int64_t* var_40 = rdi

if (rdi != rax_3)
    while (i != 0)
        int64_t* rcx_2 = *(rsi + 0x40)
        void* rax_5 = (*(*rcx_2 + 0x1c8))(rcx_2, rdi)
        
        if (rax_5 == 0)
            int16_t* const r9_1
            
            if (rdi[1].d == rax_5.d)
                r9_1 = &data_142d40450
            else
                r9_1 = *rdi
            
            sub_140af98a0("Unknown", 0x8b, u"Could not get file manifest (%s).", r9_1)
            sub_140afbb40()
        
        int128_t* r15_1 = *(rax_5 + 0x48)
        int128_t* var_48_1 = r15_1
        void* rax_7 = r15_1 + sx.q(*(rax_5 + 0x50)) * 0x18
        
        if (r15_1 != rax_7)
            do
                uint64_t r13_1 = zx.q(*(r15_1 + 0x14))
                
                if (i == 0)
                    break
                
                int64_t* j
                
                do
                    int64_t rbx_2 = *i
                    int64_t rdi_1 = i[1]
                    
                    if (rbx_2 - 1 + rdi_1 u>= rbp)
                        int64_t r12_2 = r13_1 - 1 + rbp
                        
                        if (r12_2 u< rbx_2)
                            break
                        
                        int64_t r15_2 = sx.q(*(rsi + 0x60))
                        int32_t rax_10 = (r15_2 + 1).d
                        *(rsi + 0x60) = rax_10
                        
                        if (rax_10 s> *(rsi + 0x64))
                            sub_1405a4df0(rsi + 0x58)
                        
                        int64_t rax_11 = *(rsi + 0x58)
                        int64_t rcx_5 = r15_2 * 3
                        r15_1 = var_48_1
                        *(rax_11 + (rcx_5 << 3)) = *r15_1
                        *(rax_11 + (rcx_5 << 3) + 0x10) = r15_1[1].q
                        void* rdx_3 = *(rsi + 0x58) + sx.q(*(rsi + 0x60)) * 0x18
                        
                        if (rbp u< rbx_2)
                            int32_t rax_15 = rbx_2.d - rbp.d
                            *(rdx_3 - 8) += rax_15
                            *(rdx_3 - 4) -= rax_15
                        
                        if (r12_2 u<= rdi_1 - 1 + rbx_2)
                            break
                        
                        rsi = arg1
                        *(rdx_3 - 4) += rdi_1.d - rbp.d - r13_1.d + rbx_2.d
                    
                    j = sub_14082fb80(i)
                    i = j
                while (j != 0)
                uint64_t rax_18 = zx.q(*(r15_1 + 0x14))
                r15_1 += 0x18
                rsi = arg1
                rbp += rax_18
                var_48_1 = r15_1
            while (r15_1 != rax_7)
            
            rdi = var_40
        
        rdi = &rdi[2]
        var_40 = rdi
        
        if (rdi == rax_3)
            break
    
    r15 = var_50
    r12 = var_78
    r13 = var_6c

uint64_t rdx_5 = sx.q(*(rsi + 0x60))
int128_t* rbx_3 = *(rsi + 0x58)
void* rsi_1 = rbx_3 + rdx_5 * 0x18
void* rbx_4

if (rbx_3 == rsi_1)
    rbx_4 = arg1
else
    do
        int64_t rdi_5 = sx.q(r15)
        r15 = (rdi_5 + 1).d
        
        if (r15 s> r13)
            sub_1405a4f90(&var_78)
            r12 = var_78
            r13 = var_6c
        
        int128_t zmm0 = *rbx_3
        rbx_3 += 0x18
        *(r12 + rdi_5 * 0x10) = zmm0
    while (rbx_3 != rsi_1)
    
    rbx_4 = arg1
    rdx_5 = zx.q(*(rbx_4 + 0x60))

int128_t* r10 = *(rbx_4 + 0x58)
int32_t r8 = (rdx_5 - 1).d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdx_5.d)
int32_t i_7 = (temp1 - temp0) s>> 1

if (i_7 s> 0)
    int128_t* rdx_7 = r10
    uint64_t i_5 = zx.q(i_7)
    uint64_t i_1
    
    do
        int128_t* rax_25 = r10 + sx.q(r8) * 0x18
        
        if (rdx_7 != rax_25)
            int128_t zmm3 = *rdx_7
            int64_t zmm2 = rdx_7[1].q
            *rdx_7 = *rax_25
            rdx_7[1].q = rax_25[1].q
            *rax_25 = zmm3
            rax_25[1].q = zmm2
        
        rdx_7 += 0x18
        r8 -= 1
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

int64_t* rcx_11 = *(rbx_4 + 0x28)
var_78 = r12
int32_t var_70_2 = r15
int32_t var_6c_1 = r13
int64_t* rax_27 = (**rcx_11)(rcx_11, &var_78, r8)
int64_t* rcx_12 = *(rbx_4 + 0x48)
int64_t* rdx_9 = rcx_12

if (rcx_12 != rax_27)
    *(rbx_4 + 0x48) = rax_27
    rdx_9 = rax_27
    
    if (rcx_12 != 0)
        (**rcx_12)(rcx_12, 1)
        rdx_9 = *(rbx_4 + 0x48)

int64_t* rcx_13 = *(rbx_4 + 0x30)
int64_t result = (**rcx_13)(rcx_13, rdx_9)
int64_t* rcx_14 = *(rbx_4 + 0x50)

if (rcx_14 != result)
    *(rbx_4 + 0x50) = result
    
    if (rcx_14 != 0)
        result = (**rcx_14)(rcx_14, 1)

int32_t i_4 = i_6
int64_t* rbx_5 = var_60

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_15 = *rbx_5
        
        if (rcx_15 != 0)
            result = sub_140a74f90(rcx_15)
        
        rbx_5 = &rbx_5[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_5 = var_60

if (rbx_5 == 0)
    return result

return sub_140a74f90(rbx_5)
