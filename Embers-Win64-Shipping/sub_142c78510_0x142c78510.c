// 函数: sub_142c78510
// 地址: 0x142c78510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg1
void* const r14 = nullptr
SOCKET rbp = arg1[0x47]
int64_t rax = -1
char* r8 = *(r15 + 0x4e38)
void* const arg_8 = nullptr
*arg2 = 1

do
    rax += 1
while (r8[rax] != 0)

int32_t rax_1
char* arg_18
char* rcx

if (rax u> 2)
    int64_t i_2 = -1
    
    do
        i_2 += 1
    while (r8[2 + i_2] != 0)
    
    if (i_2 != 0)
        void* rcx_1 = &r8[2]
        int64_t i
        
        do
            if (*rcx_1 == 0x3f)
                *rcx_1 = 9
            
            rcx_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    rax_1 = sub_142c51e30(r15, &r8[2], 0, &arg_8, &arg_18, 0)
    
    if (rax_1 == 0)
        r14 = arg_8
        rcx = arg_18
        goto label_142c785f8
else
    rcx = nullptr
    arg_8 = &data_1434cce10
    arg_18 = nullptr
label_142c785f8:
    int64_t rdi_1 = sub_142c56230(rcx)
    int64_t arg_10
    int64_t* var_58_2 = &arg_10
    int32_t i_4 = sub_142c64d60(arg1, rbp, arg4, arg_8)
    int32_t i_3 = i_4
    
    if (i_4 == 0)
        int32_t i_1
        
        do
            int32_t i_5
            i_5, arg3 = sub_142c645e0(arg1, 2, arg_8, arg_10, arg3)
            i_3 = i_5
            
            if (i_5 != 0)
                break
            
            int64_t rax_3 = arg_10
            arg_8 += rax_3
            rdi_1 -= rax_3
            
            if (rdi_1 s< 1)
                break
            
            int32_t rax_4
            int512_t zmm0
            rax_4, zmm0 = sub_142c64080(-1, -1, rbp, zx.q(i_3 + 0x64))
            
            if (rax_4 s< 0)
                i_3 = 0x37
                break
            
            int64_t* var_58_3 = &arg_10
            i_1 = sub_142c64d60(arg1, rbp, zmm0, arg_8)
            i_3 = i_1
        while (i_1 == 0)
    
    int64_t r8_5
    int64_t r9_6
    r8_5, r9_6 = data_143ccb8a0(r14)
    
    if (i_3 != 0)
        sub_142c64760(r15, "Failed sending Gopher request", r8_5, arg3)
        return i_3
    
    int32_t rax_5
    rax_5, r8_5, arg3 = sub_142c64c40(rbp, arg1, "\r\n", r9_6, arg3)
    
    if (rax_5 != 0)
        sub_142c64760(r15, "Failed sending Gopher request", r8_5, arg3)
        return rax_5
    
    int512_t zmm2
    rax_1, zmm2 = sub_142c645e0(arg1, 2, "\r\n", 2, arg3)
    
    if (rax_1 == 0)
        sub_142c68d40(arg1, 0, -1, 0, zmm2, r15 + 0xf8, 0xffffffff, nullptr)
        return 0
return rax_1
