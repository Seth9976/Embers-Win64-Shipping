// 函数: sub_140ffd8b0
// 地址: 0x140ffd8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t* rcx = *(arg1 + 0x168)
int64_t* var_1c8 = nullptr
*(arg1 + 0x17d00) = 0
int32_t rax_3 = (**rcx)(rcx, &data_1435fc2a0, &var_1c8)
int64_t var_1f8

if (rax_3 s< 0)
    var_1f8 = 0
    sub_140fff020(rax_3, 
        "Direct3DDevice->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device."
    "cpp", 
        0x252)

int64_t* rcx_2 = var_1c8
int64_t* var_1d0 = nullptr
(*(*rcx_2 + 0x38))(rcx_2, &var_1d0)
int32_t r12 = 0
uint32_t var_1d8 = 0
sub_140af2b60()
char rax_5 = sub_140b2ab80(&data_143dbb3f0, u"FullscreenDisplay=", &var_1d8)
uint32_t rbx = zx.d(rax_5)

while (true)
    int64_t* rcx_3 = var_1d0
    int64_t* var_1e0 = nullptr
    int64_t r9_1 = *rcx_3
    
    if ((*(r9_1 + 0x38))(rcx_3, zx.q(r12), &var_1e0, r9_1, var_1f8) != 0)
        int64_t* rcx_17 = var_1e0
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x10))(rcx_17)
        
        rbx.b = 0
        break
    
    if (rbx.b == 0 || r12 == var_1d8)
        int64_t* rcx_4 = var_1e0
        int16_t var_d8[0x30]
        (*(*rcx_4 + 0x38))(rcx_4, &var_d8)
        void var_178
        
        if (sub_1419767f0() == 0)
            if (sub_1419767d0() == 0)
                sub_1419767e0()
            else
                int32_t i = data_143e2c090.d
                void* rdx_9 = nullptr
                int16_t r15_1 = 0
                
                if (i s> 0)
                    do
                        int16_t rdi_1 = 0
                        void* r14_2 = zx.q(r15_1) * 0x78 + data_143e2c098
                        
                        if (*(r14_2 + 0x48) s> 0)
                            while (true)
                                void* var_f8_2 = nullptr
                                int64_t rax_16 = -1
                                void* rsi_2 = zx.q(rdi_1) * 0x1d0 + *(r14_2 + 0x50)
                                
                                do
                                    rax_16 += 1
                                while (var_d8[rax_16] != 0)
                                
                                int32_t rbx_2 = (rax_16 + 1).d
                                int32_t var_e8_2 = rax_16.d
                                
                                if (rbx_2 u> 0x80 && rbx_2 != 0)
                                    void* rax_17 = sub_140a84c80(0, sx.q(rbx_2), 0)
                                    rdx_9 = rax_17
                                    var_f8_2 = rax_17
                                
                                var_1f8.b = 0x3f
                                void* rcx_10 = &var_178
                                
                                if (rdx_9 != 0)
                                    rcx_10 = rdx_9
                                
                                sub_14060abb0(rcx_10, rbx_2, &var_d8, rbx_2, var_1f8.b)
                                void* rax_18 = rcx_10
                                void* rdx_13 = rsi_2 + 0x100 - rax_18
                                uint32_t j
                                uint32_t rbx_3
                                
                                do
                                    rbx_3 = zx.d(*rax_18)
                                    j = zx.d(*(rax_18 + rdx_13))
                                    
                                    if (rbx_3 != j)
                                        break
                                    
                                    rax_18 += 1
                                while (j != 0)
                                
                                if (var_f8_2 != 0)
                                    sub_140a74f90(var_f8_2)
                                
                                if (rbx_3 - j == 0 && (*(rsi_2 + 0x120) & 6) != 0)
                                    *(arg1 + 0x17d04) = zx.d(r15_1) << 0x10 | zx.d(rdi_1)
                                    goto label_140ffdc0e
                                
                                rdi_1 += 1
                                rdx_9 = nullptr
                                
                                if (zx.d(rdi_1) s>= *(r14_2 + 0x48))
                                    i = data_143e2c090.d
                                    break
                        
                        r15_1 += 1
                    while (zx.d(r15_1) s< i)
                    
                    rbx = zx.d(rax_5)
        else
            void* rdx_3 = nullptr
            int32_t var_1e4 = 0
            void* var_f8_1 = nullptr
            int64_t rax_9 = -1
            
            do
                rax_9 += 1
            while (var_d8[rax_9] != 0)
            
            int32_t rbx_1 = (rax_9 + 1).d
            int32_t var_e8_1 = rax_9.d
            
            if (rbx_1 u> 0x80 && rbx_1 != 0)
                void* rax_10 = sub_140a84c80(0, sx.q(rbx_1), 0)
                rdx_3 = rax_10
                var_f8_1 = rax_10
            
            var_1f8.b = 0x3f
            void* rcx_5 = &var_178
            
            if (rdx_3 != 0)
                rcx_5 = rdx_3
            
            sub_14060abb0(rcx_5, rbx_1, &var_d8, rbx_1, var_1f8.b)
            uint32_t rax_11 = sub_142c48fb0(rcx_5, &var_1e4)
            
            if (var_f8_1 != 0)
                sub_140a74f90(var_f8_1)
            
            if (rax_11 != 0)
                void var_78
                
                if (rax_11 != 0xffffffff && rax_11 != 0xfffffffa)
                    sub_142c493a0(rax_11, &var_78)
                rbx = zx.d(rax_5)
            else
                int32_t rcx_8 = var_1e4
                int32_t var_1c0 = 0x2003c
                char var_1bc_1 = zx.o(0).b
                int128_t var_1ac
                __builtin_memset(&var_1ac, 0, 0x28)
                
                if (sub_142c49080(rcx_8, &var_1c0) != 0)
                    rbx = zx.d(rax_5)
                else
                    if ((var_1bc_1 & 1) != 0)
                        *(arg1 + 0x17d04) = var_1e4
                    label_140ffdc0e:
                        *(arg1 + 0x17d00) = r12
                        int64_t* rcx_16 = var_1e0
                        
                        if (rcx_16 != 0)
                            (*(*rcx_16 + 0x10))(rcx_16)
                        
                        rbx.b = 1
                        break
                    
                    rbx = zx.d(rax_5)
    
    int64_t* rcx_12 = var_1e0
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x10))(rcx_12)
    
    r12 += 1

int64_t* rcx_18 = var_1d0

if (rcx_18 != 0)
    int64_t rdx_14 = *rcx_18
    (*(rdx_14 + 0x10))(rcx_18, rdx_14)

int64_t* rcx_19 = var_1c8

if (rcx_19 != 0)
    int64_t rdx_15 = *rcx_19
    (*(rdx_15 + 0x10))(rcx_19, rdx_15)

__security_check_cookie(rax_1 ^ &var_218)
return zx.q(rbx.b)
