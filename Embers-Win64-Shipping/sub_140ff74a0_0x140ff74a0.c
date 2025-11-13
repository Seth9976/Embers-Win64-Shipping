// 函数: sub_140ff74a0
// 地址: 0x140ff74a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t r14 = 0
int32_t rbx = arg4.d
void* r15

if (arg2 != 0)
    r15 = (*(*arg2 + 0x48))(arg2)
else
    r15 = nullptr

int32_t rax_5 = arg3[3] - arg3[1]
int64_t* rcx_1 = *(r15 + 0x38)
int32_t r12_1 = arg3[2] - *arg3
int32_t r13_1 = arg4:4.d - rbx
void var_78
(*(*rcx_1 + 0x50))(rcx_1, &var_78)
int32_t var_68
int32_t rcx_2 = var_68
bool var_e8 = rcx_2 == data_1439c878c
bool cond:0 = rcx_2 == data_1439c8944
arg5[1].d = 0
uint64_t r13_3 = zx.q(r13_1 * rax_5 * r12_1)
uint32_t rdx_1 = (r13_3 << 3).d

if (*(arg5 + 0xc) != rdx_1)
    sub_1405c5570(arg5, rdx_1)
    rcx_2 = var_68

int32_t var_b8 = *arg3
int32_t var_b4 = arg3[1]
int32_t var_ac = arg3[2]
int32_t var_a8 = arg3[3]
int32_t var_a4 = arg4:4.d
int32_t var_9c = rax_5
int32_t var_98 = r13_1
int32_t var_90 = rcx_2
int32_t var_b0 = rbx
int32_t var_a0 = r12_1
int64_t* rcx_4 = *(arg1 + 0x168)
int32_t var_94 = 1
int64_t var_8c = 3
int64_t var_84 = 0x20000
int64_t* var_d0 = nullptr
int32_t rax_16 = (*(*rcx_4 + 0x30))(rcx_4, &var_a0, 0, &var_d0)

if (rax_16 s< 0)
    int32_t var_118
    var_118.q = *(arg1 + 0x168)
    sub_140fff020(rax_16, 
        "Direct3DDevice->CreateTexture3D(&Desc,NULL,TempTexture3D.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x410)

int64_t* rcx_8 = *(arg1 + 0x150)
(*(*rcx_8 + 0x170))(rcx_8, var_d0, 0, 0, 0, 0, *(r15 + 0x38), 0, &var_b8)
int32_t var_110
int64_t var_c8
var_110.q = &var_c8
int64_t* rcx_9 = *(arg1 + 0x150)
int32_t rax_20 = (*(*rcx_9 + 0x70))(rcx_9, var_d0, 0, 1, 0, var_110)

if (rax_20 s< 0)
    int32_t var_118_2
    var_118_2.q = *(arg1 + 0x168)
    sub_140fff020(rax_20, 
        "Direct3DDeviceIMContext->Map(TempTexture3D,0,D3D11_MAP_READ,0,&LockedRect)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x418)

int64_t r15_2 = sx.q(arg5[1].d)

if (r13_3.d s>= r15_2.d)
    int32_t rax_21 = (r15_2 + r13_3).d
    arg5[1].d = rax_21
    
    if (rax_21 s> *(arg5 + 0xc))
        sub_1405a4d70(arg5)
    
    memset(*arg5 + (r15_2 << 3), 0, sx.q(r13_3.d) << 3)

int32_t var_c0
int32_t var_bc

if (var_e8 != 0)
    int32_t rcx_14 = rbx
    int32_t var_e0_1 = rbx
    
    if (rbx s< arg4:4.d)
        int32_t rax_23 = arg3[3]
        int32_t rdx_6 = arg4:4.d
        int32_t r8_2 = rax_5
        
        do
            int32_t r15_3 = arg3[1]
            
            if (r15_3 s< rax_23)
                do
                    memcpy(*arg5 + (sx.q((r14 - arg3[1] + r15_3) * r12_1) << 3), 
                        zx.q((r15_3 - arg3[1]) * var_c0) + zx.q((rbx - rcx_14) * var_bc) + var_c8, 
                        r12_1 << 3)
                    rax_23 = arg3[3]
                    r15_3 += 1
                    rcx_14 = var_e0_1
                while (r15_3 s< rax_23)
                
                rdx_6 = arg4:4.d
                r8_2 = rax_5
            
            rbx += 1
            r14 += r8_2
        while (rbx s< rdx_6)
else if (cond:0 != 0)
    int32_t r13_6 = arg4:4.d
    int32_t r15_4 = rbx
    
    if (rbx s< r13_6)
        int32_t rax_32 = rax_5
        
        do
            int32_t i = arg3[1]
            
            if (i s< arg3[3])
                int32_t j = arg3[2]
                
                do
                    int64_t r8_4 = sx.q(*arg3)
                    
                    if (r8_4.d s< j)
                        int32_t var_e0_2 = 0x3f800000
                        void* r10_5 = zx.q((rbx - r15_4) * var_bc) + zx.q((i - arg3[1]) * var_c0)
                            + var_c8 + (r8_4 << 1)
                        
                        do
                            r10_5 += 2
                            int32_t rax_37 = (r14 - arg3[1] + i) * r12_1 + r8_4.d
                            r8_4 = zx.q(r8_4.d + 1)
                            int64_t rdx_11 = sx.q(rax_37)
                            *(*arg5 + (rdx_11 << 3)) = *(r10_5 - 2)
                            *(*arg5 + (rdx_11 << 3) + 6) = 0x3c00
                            j = arg3[2]
                        while (r8_4.d s< j)
                    
                    i += 1
                while (i s< arg3[3])
                
                rax_32 = rax_5
            
            rbx += 1
            r14 += rax_32
        while (rbx s< r13_6)
int64_t* rcx_24 = *(arg1 + 0x150)
int64_t result = (*(*rcx_24 + 0x78))(rcx_24, var_d0, 0)
int64_t* rcx_25 = var_d0

if (rcx_25 != 0)
    result = (*(*rcx_25 + 0x10))(rcx_25)

__security_check_cookie(rax_1 ^ &var_138)
return result
