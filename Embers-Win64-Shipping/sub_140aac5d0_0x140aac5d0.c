// 函数: sub_140aac5d0
// 地址: 0x140aac5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* rax = sub_140aae970()
EnterCriticalSection(rax + 8)
int128_t zmm1 = *arg2
int128_t var_50 = *arg1
int128_t var_40 = zmm1
sub_140aaaf00(rax + 0x30, &arg_8, &var_50)
int64_t rax_1 = sx.q(arg_8)
void* const rcx_4

if (rax_1.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax_1 << 6) + *(rax + 0x30)

int64_t* rdi_1 = rcx_4 + 0x20

if (rcx_4 == 0)
    rdi_1 = nullptr

int32_t rax_2

if (rdi_1 != 0 && arg4 != 0)
    int16_t* rcx_5
    
    if (arg4[1].d == 0)
        rcx_5 = &data_142d40450
    else
        rcx_5 = *arg4
    
    rax_2 = sub_140a5ff80(rcx_5, 0)

void* rbx
int64_t* rdi_2

if (rdi_1 == 0 || (arg4 != 0 && rdi_1[2].d != rax_2))
    rdi_2 = nullptr
    
    if (rax != -8)
        LeaveCriticalSection(rax + 8)
    
    rbx.b = 0
else
    int64_t r15_1 = *rdi_1
    rdi_2 = rdi_1[1]
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    if (rax != -8)
        LeaveCriticalSection(rax + 8)
    
    if (r15_1 == 0)
        rbx.b = 0
    else
        uint64_t var_98
        uint64_t var_88
        uint64_t* rdx_1
        int32_t rbp_2
        
        if (arg4 == 0)
            var_88 = 0
            rdx_1 = &var_88
            int64_t var_80_1 = 0
            rbp_2 = 2
        else
            int32_t rbx_1 = arg4[1].d
            int64_t rbp_1 = *arg4
            var_98 = 0
            int32_t var_90_1 = rbx_1
            
            if (rbx_1 != 0)
                sub_1405a4c70(&var_98, rbx_1, 0)
                memcpy(var_98, rbp_1, rbx_1 * 2)
                rdx_1 = &var_98
                rbp_2 = 1
            else
                int32_t var_8c_1 = 0
                rdx_1 = &var_98
                rbp_2 = rbx_1 + 1
        
        int64_t var_78 = r15_1
        int64_t* var_70_1 = rdi_2
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        void var_68
        int64_t* rax_3 = sub_140a95c00(&var_68, rdx_1, &var_78)
        int64_t rdx_4 = *arg3
        *arg3 = *rax_3
        *rax_3 = rdx_4
        int64_t rdx_5 = arg3[1]
        arg3[1] = rax_3[1]
        rax_3[1] = rdx_5
        arg3[2].d = rax_3[2].d
        void* var_60
        
        if (var_60 != 0)
            int32_t rax_5 = *(var_60 + 8)
            *(var_60 + 8) -= 1
            
            if (rax_5 == 1)
                (**var_60)(var_60)
                int32_t rax_8 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        if ((rbp_2.b & 2) != 0)
            uint64_t rcx_14 = var_88
            rbp_2 &= 0xfffffffd
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
        
        if ((rbp_2.b & 1) != 0)
            uint64_t rcx_15 = var_98
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
        
        rbx.b = 1

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rsi_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_5 = *rdi_2
            (*(r8_5 + 8))(rdi_2, zx.q(rsi_1), r8_5)

return zx.q(rbx.b)
