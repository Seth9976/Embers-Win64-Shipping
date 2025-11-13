// 函数: sub_14212f3e0
// 地址: 0x14212f3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = sub_140ce3290(arg1)

if (data_143de5452 == 0)
    zmm0 = sub_142113ac0()

TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    zmm0 = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        zmm0 = _Init_thread_footer(&data_143cd80cc)

int32_t rbp = 0
void* r14

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    r14 = &arg1[0x71]
    zmm0 = sub_142113b50(arg1, r14, &arg1[0x73])
else
    r14 = &arg1[0x71]
    void* i = *r14
    
    for (void* rdi_2 = sx.q(*(r14 + 8)) * 0x38 + i; i != rdi_2; i += 0x38)
        void* rcx_1 = *(i + 8)
        
        if (rcx_1 != 0)
            *(i + 8) = 0
            zmm0 = sub_14212fcb0(rcx_1)

int32_t i_5 = *(r14 + 8)
void*** rbx_1 = *r14

if (i_5 != 0)
    int32_t i_1
    
    do
        *rbx_1 = &data_1432c74f8
        zmm0 = sub_142130210(rbx_1)
        void* rcx_3 = rbx_1[1]
        
        if (rcx_3 != 0)
            zmm0 = sub_14212fcb0(rcx_3)
        
        rbx_1 = &rbx_1[7]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

*(r14 + 8) = 0

if (*(r14 + 0xc) != 0)
    zmm0 = sub_1408cf3a0(r14, 0)

int64_t* rcx_5 = arg1[0x1a]

if (rcx_5 != 0)
    zmm0 = sub_140cd85e0(rcx_5)

int32_t i_2 = 0

if (arg1[0x21].d s> 0)
    int64_t rdi_3 = 0
    
    do
        int64_t* rcx_6 = *(arg1[0x20] + rdi_3 + 0x10)
        
        if (rcx_6 != 0)
            zmm0 = sub_140cd85e0(rcx_6)
        
        i_2 += 1
        rdi_3 += 0x28
    while (i_2 s< arg1[0x21].d)

int32_t i_3 = 0

if (arg1[0x23].d s> 0)
    int64_t rdi_4 = 0
    
    do
        int64_t* rcx_7 = *(arg1[0x22] + rdi_4 + 0x10)
        
        if (rcx_7 != 0)
            zmm0 = sub_140cd85e0(rcx_7)
        
        i_3 += 1
        rdi_4 += 0x28
    while (i_3 s< arg1[0x23].d)

int32_t i_4 = 0

if (arg1[0x25].d s> 0)
    int64_t rdi_5 = 0
    
    do
        int64_t* rcx_8 = *(arg1[0x24] + rdi_5 + 0x10)
        
        if (rcx_8 != 0)
            zmm0 = sub_140cd85e0(rcx_8)
        
        i_4 += 1
        rdi_5 += 0x30
    while (i_4 s< arg1[0x25].d)

void* r13 = arg1[0x2f]
void* r12_1 = sx.q(arg1[0x30].d) * 0x68 + r13

if (r13 != r12_1)
    void* r15_1 = r13 + 0x40
    
    do
        int64_t rdi_6 = sx.q(*(r15_1 - 0x10))
        int32_t rbx_2 = 0
        uint64_t var_38 = 0
        uint64_t r14_1 = 0
        int32_t var_30_1 = 0
        int32_t var_2c_1 = 0
        int32_t temp1_1 = rdi_6.d
        
        if (temp1_1 != 0)
            if (temp1_1 s> 0)
                sub_1405c5570(&var_38, rdi_6.d)
                rbp = var_2c_1
                rbx_2 = var_30_1
                r14_1 = var_38
            
            zmm0 = memcpy(r14_1 + (sx.q(rbx_2) << 3), *(r15_1 - 0x18), (rdi_6 << 3).d)
            rbx_2 += rdi_6.d
            var_30_1 = rbx_2
        
        int64_t rdi_7 = sx.q(*r15_1)
        
        if (rdi_7.d != 0)
            int32_t rdx_5 = rbx_2 + rdi_7.d
            
            if (rdx_5 s> rbp)
                sub_1405c5570(&var_38, rdx_5)
                rbx_2 = var_30_1
                r14_1 = var_38
            
            zmm0 = memcpy(r14_1 + (sx.q(rbx_2) << 3), *(r15_1 - 8), (rdi_7 << 3).d)
            rbx_2 += rdi_7.d
        
        uint64_t rbx_3 = r14_1
        int64_t rcx_13 = r14_1 + (sx.q(rbx_2) << 3)
        int64_t rdi_8 = 0
        uint64_t rbp_4 = (rcx_13 - r14_1 + 7) u>> 3
        
        if (r14_1 u> rcx_13)
            rbp_4 = 0
        
        if (rbp_4 != 0)
            do
                int64_t* rcx_14 = *rbx_3
                
                if (rcx_14 != 0)
                    zmm0 = sub_140cd85e0(rcx_14)
                
                rbx_3 += 8
                rdi_8 += 1
            while (rdi_8 != rbp_4)
        
        if (r14_1 != 0)
            zmm0 = sub_140a74f90(r14_1)
        
        r13 += 0x68
        r15_1 += 0x68
        rbp = 0
    while (r13 != r12_1)

if (arg1[0x28] != 0)
    zmm0 = sub_142134750(arg1)

sub_14212a140(arg1, zmm0)
int64_t result = sub_140d3cb50(arg1)

if (result != 0)
    result = sub_140d3cb50(arg1)
    
    if (*(result + 0x240) s< 0x132)
        sub_14210fd90()
        int64_t* arg_8
        sub_140cba0f0(&data_143a2e7c0, &arg_8, &data_143f48ac8)
        arg_8 = arg1
        sub_14210fd90()
        return sub_1419e9e70(&data_143a2e7c0, &data_143f48ac8, &arg_8)

return result
