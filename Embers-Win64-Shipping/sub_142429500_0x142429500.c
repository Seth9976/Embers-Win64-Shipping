// 函数: sub_142429500
// 地址: 0x142429500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* r14 = arg1[0xb]
*arg1 = &data_14334b198
int32_t i = sx.d(*(*(r14 + 0x50) + 0x78))

while (i != 1)
    void* rbx_3 = (sx.q(i) << 6) + *(r14 + 0x50)
    int64_t rax_3 = 0
    i = sx.d(*(rbx_3 + 0x38))
    void* rcx = *(rbx_3 + 8)
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_3 = *(rcx + 8)
    
    if (((rax_3 u>> 0x1a).b & 1) == 0)
        int32_t rdi_1 = data_14399e5e0
        int64_t* rax_5 = sub_140a242a0()
        void* rcx_1 = *(rbx_3 + 8)
        void** var_30_1 = nullptr
        int32_t var_24_1 = 4
        int32_t j_2 = 1
        void* var_50 = rcx_1
        
        if (rcx_1 != 0)
            *(rcx_1 + 0x48) += 1
        
        (*(*rax_5 + 0x48))(rax_5, &var_50, zx.q(rdi_1), rax_5)
        void** rcx_3 = var_30_1
        void** rbx_4 = &var_50
        int32_t j_1 = j_2
        
        if (rcx_3 != 0)
            rbx_4 = rcx_3
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t* rcx_4 = *rbx_4
                
                if (rcx_4 != 0)
                    rcx_4[9].d -= 1
                    
                    if (rcx_4[9].d == 1)
                        sub_140a2f6e0(rcx_4)
                
                rbx_4 = &rbx_4[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_3 = var_30_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)

int64_t* i_1 = arg1[4]

for (void* rsi = &i_1[sx.q(arg1[5].d)]; i_1 != rsi; i_1 = &i_1[1])
    int64_t* rcx_5 = *i_1
    
    if (rcx_5 != 0)
        void* rdx_2 = *rcx_5
        
        if (rdx_2 != 0)
            *(rdx_2 + 8) = rcx_5[1]
        
        int64_t* rdx_3 = rcx_5[1]
        
        if (rdx_3 != 0)
            *rdx_3 = *rcx_5
        
        *rcx_5 = 0
        rcx_5[1] = 0
        void* rdi_2 = *i_1
        
        if (rdi_2 != 0)
            *i_1 = 0
            sub_142429790(rdi_2)
            j_sub_140a74f90(rdi_2)

int64_t rcx_8 = arg1[8]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_142429170(&arg1[4])
int32_t i_3 = arg1[3].d
int64_t* rbx_5 = arg1[2]

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_10 = *rbx_5
        
        if (rcx_10 != 0)
            (**rcx_10)(rcx_10, 1)
        
        rbx_5 = &rbx_5[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    rbx_5 = arg1[2]

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

*arg1 = &data_142fbb390
__security_check_cookie(rax_1 ^ &var_78)
return &data_142fbb390
