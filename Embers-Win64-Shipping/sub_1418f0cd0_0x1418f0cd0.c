// 函数: sub_1418f0cd0
// 地址: 0x1418f0cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *(arg2 + 0x18)
void* r14 = nullptr
int64_t rbp = sx.q(rdi[4])
int64_t r15 = sx.q(*rdi)
char arg_10

if (data_143efb638 == 0 || data_143f02d5c != 0)
    arg_10 = 0
    
    if (r15.d s> 0)
        void* rax_2 = sub_1418bb790(*(*(arg1 + 0x58) + 0x248) + 0x248, r15.d, 0x12, 6, 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanUniformBuffer.cpp", 
            0x177)
        r14 = rax_2
        memcpy(zx.q(*(rax_2 + 0x14)) + *(*(*(rax_2 + 0x20) + 0x18) + 0x18), arg3, r15.d)
        sub_1418be4a0(r14)
else
    arg_10 = 1

int64_t rbx = 0
int64_t rcx_6

if (rbp.d s<= 0)
    rcx_6 = data_143f02bc8
else
    int32_t rdx_3 = (rbp << 3).d
    rbx = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int64_t r13_1 = sx.q(rdx_3)
    rcx_6 = rbx + r13_1
    
    if (rcx_6 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, rdx_3 + 8)
        rbx = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rcx_6 = rbx + r13_1
    
    data_143f02bc8 = rcx_6
    
    if (rbp.d s> 0)
        int64_t rdx_5 = 0
        
        do
            void* rax_4 = *(rdi + 8)
            
            if ((rax_4.b & 1) != 0)
                rax_4 = (rax_4 s>> 1) + &rdi[2]
            
            *(rbx + (rdx_5 << 3)) = *(zx.q(*(rax_4 + (rdx_5 << 2))) + arg3)
            rdx_5 += 1
        while (rdx_5 s< rbp)
        
        rcx_6 = data_143f02bc8

void* var_68
void*** rcx_13

if (arg_10 == 0)
    bool cond:1_1 = data_143f02ba8 == 0
    var_68 = arg2
    void* var_60_1 = r14
    int32_t var_50_1 = rbp.d
    
    if (cond:1_1)
        rcx_13 = (rcx_6 + 7) & 0xfffffffffffffff8
        void* rax_11 = &rcx_13[6]
        
        if (rax_11 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x38)
            rcx_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_11 = &rcx_13[6]
        
        data_143f02bac += 1
        int128_t zmm0 = var_68.o
        data_143f02bc8 = rax_11
        *data_143f02ba0 = rcx_13
        data_143f02ba0 = &rcx_13[1]
        rcx_13[1] = 0
        *(rcx_13 + 0x10) = zmm0
        *(rcx_13 + 0x20) = rbx.o
        *rcx_13 = &data_142ff3e10
    else
        int64_t rdx_10 = *(arg2 + 0x40)
        void* rcx_17 = *(arg2 + 0x38) + 0x248
        *(arg2 + 0x40) = r14
        sub_141902a20(rcx_17, rdx_10)
        sub_141903810(arg2, rbx, rbp.d)
else
    int64_t rdi_2 = (rcx_6 + 0xf) & 0xfffffffffffffff0
    int64_t rax_6 = rdi_2 + r15
    
    if (rax_6 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, (r15 + 0x10).d)
        rdi_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_6 = rdi_2 + r15
    
    data_143f02bc8 = rax_6
    memcpy(rdi_2, arg3, r15.d)
    void* var_60 = arg2
    int32_t var_50 = rbp.d
    int32_t var_4c_1 = r15.d
    
    if (data_143f02ba8 == 0)
        rcx_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_13[7]
        
        if (rax_7 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x40)
            rcx_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_13[7]
        
        data_143f02bac += 1
        uint128_t zmm0_1 = var_68.o
        data_143f02bc8 = rax_7
        *data_143f02ba0 = rcx_13
        data_143f02ba0 = &rcx_13[1]
        *(rcx_13 + 0x10) = zmm0_1
        rcx_13[1] = 0
        *(rcx_13 + 0x20) = rbx.o
        rcx_13[6] = rdi_2
        *rcx_13 = &data_142ff3e08
    else
        sub_1418f5030(&var_68, data_143f02bb8, arg2, r15.d, rdi_2)
        sub_141903810(arg2, rbx, rbp.d)
arg3.b = 1
int64_t* arg_20
int32_t result = sub_141980430(&data_143f02b98, &arg_20, arg3.b)
int64_t* rcx_22 = arg_20

if (rcx_22 != 0)
    result = rcx_22[9].d
    rcx_22[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(rcx_22)

return result
