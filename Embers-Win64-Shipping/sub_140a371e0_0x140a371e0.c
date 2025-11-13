// 函数: sub_140a371e0
// 地址: 0x140a371e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
*arg1 = &data_142e520a8

if (arg1[8] != 0)
    int64_t* rax_2 = sub_140a242a0()
    void* rcx = arg1[8]
    void** var_30_1 = nullptr
    int32_t var_24_1 = 4
    int32_t i_3 = 1
    void* var_50 = rcx
    
    if (rcx != 0)
        *(rcx + 0x48) += 1
    
    int64_t r9_1 = *rax_2
    (*(r9_1 + 0x48))(rax_2, &var_50, 0xff, r9_1)
    void** rcx_2 = var_30_1
    void** rdi_1 = &var_50
    int32_t i_2 = i_3
    
    if (rcx_2 != 0)
        rdi_1 = rcx_2
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_3 = *rdi_1
            
            if (rcx_3 != 0)
                rcx_3[9].d -= 1
                
                if (rcx_3[9].d == 1)
                    sub_140a2f6e0(rcx_3)
            
            rdi_1 = &rdi_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rcx_2 = var_30_1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t* rcx_4 = arg1[8]
    arg1[8] = 0
    
    if (rcx_4 != 0)
        rcx_4[9].d -= 1
        
        if (rcx_4[9].d == 1)
            sub_140a2f6e0(rcx_4)

if (arg1[7] != 0)
    int32_t i_1 = 0
    
    if (arg1[4].d s> 0)
        int64_t* rdi_2 = nullptr
        
        do
            int64_t rax_5 = arg1[3]
            int64_t* rcx_5 = *(rdi_2 + rax_5)
            
            if (rcx_5 != 0)
                *(rdi_2 + rax_5) = 0
                rcx_5[9].d -= 1
                
                if (rcx_5[9].d == 1)
                    sub_140a2f6e0(rcx_5)
            
            i_1 += 1
            rdi_2 = &rdi_2[1]
        while (i_1 s< arg1[4].d)
    
    sub_140a38850()
    sub_140a38430(&data_143cf8d78, arg1)
    sub_140a38850()
    
    while (true)
        int32_t rax_7 = sub_140a2d3e0(0x143cf8db8)
        
        if (rax_7 == 0)
            break
        
        int64_t* rdi_3 =
            *(*(&data_143cf0bf8 + (zx.q(rax_7) u>> 0xe << 3)) + (zx.q(rax_7) & 0x3fff) * 0x18 + 8)
        sub_140a24050(rax_7)
        
        if (rdi_3 == 0)
            break
        
        if (*(rdi_3 + 0x61) == 0)
            int512_t zmm1_1
            zmm1_1.o = zx.o(0)
            (*(*rdi_3 + 8))(rdi_3, zmm1_1)
        
        (**rdi_3)(rdi_3, 1)
    
    int64_t* rcx_12 = arg1[7]
    
    if (rcx_12 != 0)
        (**rcx_12)(rcx_12, 1)

int64_t* rcx_13 = arg1[8]

if (rcx_13 != 0)
    rcx_13[9].d -= 1
    
    if (rcx_13[9].d == 1)
        sub_140a2f6e0(rcx_13)

sub_140a37170(&arg1[3])
int64_t rcx_15 = arg1[1]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

*arg1 = &data_142e52080
__security_check_cookie(rax_1 ^ &var_78)
return &data_142e52080
