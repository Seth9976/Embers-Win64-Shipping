// 函数: sub_141064a00
// 地址: 0x141064a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx
int64_t* var_8 = rbx
int64_t r12 = *(arg1 + 0x18)
char r13 = arg2
int32_t r15 = 1 << (data_1439c7a34).b
int32_t i_1 = r15 - 1

if (r15 != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t r14_1 = temp0_1
    int32_t arg_20 = r14_1
    int32_t i
    
    do
        int64_t* rcx_2 = *(arg1 + 0xc0)
        void* rbp_1 = **(*(r12 + (zx.q(r14_1) << 3) + 0x9d8) + 0x6d8)
        void* const rbx_1
        
        if (rcx_2 == 0)
            rbx_1 = nullptr
        else
            void* rax_4 = (*(*rcx_2 + 0x48))(rcx_2)
            rbx_1 = rax_4
            
            if (rax_4 != 0 && data_1439c7a34 u> 1)
                void* rax_5 = *(rax_4 + 0xe8)
                
                if (rax_5 != rbx_1)
                    rbx_1 = rax_5
                
                if (rbx_1 != 0)
                    while (*(rbx_1 + 8) != *(rbp_1 + 0x138))
                        rbx_1 = *(rbx_1 + 0xb8)
                        
                        if (rbx_1 == 0)
                            break
        
        int64_t* rax_7 = sub_1410626d0(arg1)
        void* const rdi_1
        
        if (rax_7 == 0)
            rdi_1 = nullptr
        else
            int64_t rdx = *rax_7
            void* rax_8 = (*(rdx + 0x48))(rax_7, rdx)
            rdi_1 = rax_8
            
            if (rax_8 != 0 && data_1439c7a34 u> 1)
                void* rcx_5 = *(rax_8 + 0xe8)
                
                if (rcx_5 != rax_8)
                    rdi_1 = rcx_5
                
                if (rdi_1 != 0)
                    while (*(rdi_1 + 8) != *(rbp_1 + 0x138))
                        rdi_1 = *(rdi_1 + 0xb8)
                        
                        if (rdi_1 == 0)
                            break
        
        void* rax_10 = rbx_1 + 0xf0
        
        if (rbx_1 == 0)
            rax_10 = 0x158
        
        void* rcx_6 = *rax_10
        void* rdx_1 = *(*(rcx_6 + 0x40) + 0x10)
        
        if (rdx_1 != 0 && *(rdx_1 + 0xfc) != 0)
            int32_t rcx_7 = *(rcx_6 + 0x64)
            
            if (rcx_7 != 1 || *(rdx_1 + 0x100) == rcx_7)
                sub_141036f20(rbp_1 + 0x1c0, rdx_1, 0, rcx_6 + 0x50)
        
        if (*(arg1 + 0xe0) != 0)
            void** rax_12 = rdi_1 + 0xf0
            
            if (rdi_1 == 0)
                rax_12 = 0x158
            
            void* r8_1 = *rax_12
            void* rdx_2 = *(*(r8_1 + 0x40) + 0x10)
            
            if (rdx_2 != 0 && *(rdx_2 + 0xfc) != 0)
                int32_t r8_2 = *(r8_1 + 0x64)
                
                if (r8_2 != 1 || *(rdx_2 + 0x100) == r8_2)
                    sub_141036f20(rbp_1 + 0x1c0, rdx_2, 0, r8_1 + 0x50)
        
        rbx = *(rbp_1 + 0x1c8)
        int32_t rdx_3 = rbx[0x25].d
        int64_t* rcx_10 = rbx[6]
        
        if (rdx_3 != 0)
            (*(*rcx_10 + 0xd0))(rcx_10, rdx_3, rbx[0x24])
            rbx[0x25].d = 0
        
        void** var_68
        sub_141022330(rbp_1, &var_68, 0)
        var_68 = &data_142efcd90
        int64_t* var_60
        
        if (var_60 != 0)
            int32_t rax_15 = *(var_60 + 0x14)
            *(var_60 + 0x14) -= 1
            
            if (rax_15 == 1 && var_60 != 0)
                sub_14100eba0(var_60)
                j_sub_140a74f90(var_60)
        
        i = not.d(1 << r14_1.b) & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_forward(i)
            r14_1 = temp0_3
            int32_t var_74_1 = r14_1
        else
            r14_1 = 0x20
    while (i != 0)
    r13 = arg2

if (data_1439c7a38 u> 1)
    int64_t r8_4 = sx.q(*(arg1 + 0xb8))
    int32_t rcx_16 = *(arg1 + 0xa0)
    int64_t r10_1 = *(arg1 + 0x90)
    sub_141024a20(arg1 + 0xf0, *(r10_1 + (r8_4 << 2)), 0, *(arg1 + 0x1a8), 
        *(r10_1 + (sx.q(modu.dp.d(0:((r8_4 - 1).d + rcx_16), rcx_16)) << 2)))

int64_t* rcx_18 = *(arg1 + 0x1b8)

if (rcx_18 != 0)
    (*(*rcx_18 + 0x28))(rcx_18, 1)
    *(arg1 + 0x1b8) = 0

uint32_t result

if (r13 == 0)
    result = 0
else
    result = sub_14197f080()

bool cond:3 = *(arg1 + 0x5c) == 0
uint32_t result_1 = result

if (not(cond:3))
    int64_t* rcx_19 = *(arg1 + 0x60)
    
    if (rcx_19 != 0)
        int64_t* var_70 = nullptr
        int32_t arg_18
        (*(*rcx_19 + 0x58))(rcx_19, &arg_18, &var_70)
        int32_t rcx_20
        rcx_20.b = arg_18 != 0
        
        if (rcx_20 != zx.d(*(arg1 + 0x54)))
            *(arg1 + 0x55) = 1
            *(arg1 + 0x5c) = 0
        
        int64_t* rcx_21 = var_70
        
        if (rcx_21 != 0)
            (*(*rcx_21 + 0x10))(rcx_21)
    
    if (*(arg1 + 0x5c) != 0)
        int64_t* rcx_22 = *(arg1 + 0x1b0)
        rbx.b = 1
        char rax_26
        
        if (rcx_22 != 0)
            rax_26 = (*(*rcx_22 + 0x18))(rcx_22, &result_1)
            rbx = zx.q(rax_26)
        
        if (rcx_22 == 0 || rax_26 != 0)
            uint32_t result_2 = result_1
            int32_t rdi_2 = 0
            
            if (result_2 == 0 && *(arg1 + 0x54) == 0 && *(arg1 + 0x5d) != 0)
                rdi_2 = 0x200
            
            sub_140a845e0(sub_140a753a0())
            int64_t* rcx_24 = *(arg1 + 0x60)
            int32_t rdi_3
            
            if (rcx_24 == 0)
                rdi_3 = 0
            else
                rdi_3 = (*(*rcx_24 + 0x40))(rcx_24, zx.q(result_2), zx.q(rdi_2))
            
            int64_t* rcx_25 = *(arg1 + 0x1b0)
            
            if (rcx_25 != 0)
                (*(*rcx_25 + 0x20))(rcx_25)
            
            if (rdi_3 + 0x7785fffb u<= 0x1b && test_bit(0x8000005, rdi_3 + 0x7785fffb))
                *(*(arg1 + 0x18) + 0x54) = 1
            else if (rdi_3 s< 0)
                int64_t var_58 = 0
                int64_t* var_80_1 = &var_58
                int64_t var_50_1 = 0
                sub_14106a020(rdi_3, "Result", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Viewport.cpp", 
                    0x24d, nullptr)
        
        if (rbx.b != 0)
            uint32_t temp1_2 = modu.dp.d(0:(*(arg1 + 0xb8) + 1), *(arg1 + 0xa0))
            *(arg1 + 0xb8) = temp1_2
            int64_t r8_7 = sx.q(temp1_2) << 3
            int64_t rcx_29 = *(arg1 + 0xc8)
            *(arg1 + 0xc0) = *(r8_7 + *(arg1 + 0x80))
            *(arg1 + 0xe0) = *(r8_7 + rcx_29)
        
        return zx.q(rbx.b)

result.b = 0
return result
