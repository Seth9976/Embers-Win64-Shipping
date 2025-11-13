// 函数: sub_141056ca0
// 地址: 0x141056ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t r15 = 0
int32_t rdi = arg4.d
void** rax_3 = *(**(arg1 + 0x20) + 0x9d8)
void** var_110 = rax_3
void* rcx_1 = rax_3[4]
int32_t rbx = rax_3[2].d
void* rax_5 = *rax_3[0xdb]
void* rax_7

if (arg2 != 0)
    rax_7 = (*(*arg2 + 0x48))(arg2)
else
    rax_7 = nullptr

void* rdx_1 = *(rax_7 + 0x58)
int32_t r12_1 = arg3[2] - *arg3
int32_t r8_1 = arg3[3] - arg3[1]
int32_t rax_9 = *(rdx_1 + 0xa8)
bool cond:0 = rax_9 == data_1439c878c
void* var_168 = rdx_1
bool cond:1 = rax_9 == data_1439c8944
arg5[1].d = 0
uint64_t rcx_6 = zx.q((arg4:4.d - rdi) * r8_1 * r12_1)
int32_t var_174 = rcx_6.d
uint32_t rcx_7 = (rcx_6 << 3).d

if (*(arg5 + 0xc) != rcx_7)
    sub_1405c5570(arg5, rcx_7)
    rdx_1 = var_168

int32_t var_70 = *arg3
int32_t var_6c = arg3[1]
int32_t var_64 = arg3[2]
int32_t var_60 = arg3[3]
int32_t var_5c = arg4:4.d
int64_t rax_15 = sx.q(*(arg2 + 0x3c))
int32_t var_68 = rdi
int32_t var_180 = 0
int32_t var_188 = 0
int64_t* result_1 = nullptr
int32_t r13_4 = ((&data_1439c85f4)[rax_15 * 0xa] * *(rdx_1 + 0x98) + 0xff) & 0xffffff00
int32_t rcx_11 = *(rdx_1 + 0xa0) * r13_4
int32_t rax_16 = sub_141048240(rcx_1, 3, rbx, zx.q(rbx), zx.q(zx.d(*(rdx_1 + 0xa4)) * rcx_11), 
    &result_1, var_188)

if (rax_16 s< 0)
    int64_t var_100 = 0
    int64_t* var_190_1 = &var_100
    int64_t var_f8_1 = 0
    sub_14106a020(rax_16, 
        "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, MipBytesAligned, TempTexture3D."
    "GetInitReference(), nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 0x67c, 
        0)

int32_t var_d4 = 0
uint32_t var_13c = zx.d(*(var_168 + 0xa4))
int32_t var_140 = *(var_168 + 0xa0)
int32_t var_144 = *(var_168 + 0x98)
int32_t var_148 = *(var_168 + 0xa8)
int64_t* result_2 = result_1
int128_t var_e8 = var_148.o
int64_t var_d0 = result_2[4]
int32_t var_c8 = 1
int128_t var_c0 = 0.o
int32_t var_d8 = r13_4
var_168.d = 0xffffffff
char var_178 = 0
int128_t var_b0 = var_e8
int64_t var_a0 = *(*(rax_7 + 0x58) + 0x20)
int32_t var_98 = 0
int32_t var_90 = 0
void* rax_23 = *(rax_7 + 0x58)
var_148.q = rax_23
uint64_t var_198

if (*(rax_23 + 0xfc) != 0)
    sub_141037220(rax_5 + 0x1c0, rax_23, 0x800, 0)
else
    int32_t rcx_16 = *(rax_23 + 0xf0)
    var_168.d = rcx_16
    
    if (rcx_16 != 0x800)
        var_178 = 1
        var_198.d = 0
        sub_1410129f0(rax_5 + 0x1c0, rax_23, rcx_16, 0x800, var_198.d)

*(rax_5 + 0x3b90) += 1
void* rcx_19 = *(rax_5 + 0x1c8)
int32_t rdx_7 = *(rcx_19 + 0x128)
int64_t* r9_1 = *(rcx_19 + 0x30)

if (rdx_7 != 0)
    (*(*r9_1 + 0xd0))(r9_1, rdx_7, *(rcx_19 + 0x120))
    *(rcx_19 + 0x128) = 0
    rcx_19 = *(rax_5 + 0x1c8)

int64_t* rcx_22 = *(rcx_19 + 0x30)
var_198.d = 0
(*(*rcx_22 + 0x80))(rcx_22, &var_d0, 0, 0, var_198, &var_a0, &var_70, var_180, var_178, r8_1, 
    var_168, rcx_11)
void* rdx_9 = *(rax_7 + 0x58)
void* rax_28 = *(rdx_9 + 0x28)

if (rax_28 == 0)
    if (data_1439b4ad4 != 0 && *(rdx_9 + 0x38) != 0)
        sub_141026da0(*(*(rax_5 + 0x1c8) + 0x118), rdx_9 + 0x30)
else if (data_1439b4ad4 != 0 && *(rax_28 + 0x30) != 0)
    sub_141026da0(*(*(rax_5 + 0x1c8) + 0x118), rax_28 + 0x28)

if (var_178 != 0)
    var_198.d = 0
    sub_1410129f0(rax_5 + 0x1c0, var_148.q, 0x800, var_168.d, var_198.d)

sub_141022330(*var_110[0xdb], &var_110, 1)
var_110 = &data_142efcd90
int64_t* var_108

if (var_108 != 0)
    int32_t rax_29 = *(var_108 + 0x14)
    *(var_108 + 0x14) -= 1
    
    if (rax_29 == 1 && var_108 != 0)
        sub_14100eba0(var_108)
        j_sub_140a74f90(var_108)

int64_t* rcx_33 = result_2[4]
int64_t var_118
int32_t rax_31 = (*(*rcx_33 + 0x40))(rcx_33, 0, 0, &var_118, var_198)

if (rax_31 s< 0)
    var_148.q = 0
    int32_t* var_190_3 = &var_148
    var_140.q = 0
    sub_14106a020(rax_31, "TempTexture3D->GetResource()->Map(0, nullptr, &pData)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 0x6a4, 
        nullptr)

int64_t rbx_3 = sx.q(arg5[1].d)

if (var_174 s>= rbx_3.d)
    int32_t rax_33 = var_174 + rbx_3.d
    arg5[1].d = rax_33
    
    if (rax_33 s> *(arg5 + 0xc))
        sub_1405a4d70(arg5)
    
    memset(*arg5 + (rbx_3 << 3), 0, sx.q(var_174) << 3)

if (cond:0 != 0)
    int32_t rcx_37 = rdi
    int32_t var_174_1 = rcx_37
    
    if (rdi s< arg4:4.d)
        int32_t rax_35 = arg3[3]
        int32_t rdx_15 = arg4:4.d
        int32_t r8_8 = r8_1
        
        do
            int32_t rbx_4 = arg3[1]
            
            if (rbx_4 s< rax_35)
                do
                    memcpy(*arg5 + (sx.q((r15 - arg3[1] + rbx_4) * r12_1) << 3), 
                        zx.q((rbx_4 - arg3[1]) * r13_4) + zx.q((rcx_37 - rdi) * rcx_11) + var_118, 
                        r12_1 << 3)
                    rax_35 = arg3[3]
                    rbx_4 += 1
                while (rbx_4 s< rax_35)
                
                rdi = arg4.d
                rcx_37 = var_174_1
                rdx_15 = arg4:4.d
                r8_8 = r8_1
            
            rcx_37 += 1
            r15 += r8_8
            var_174_1 = rcx_37
        while (rcx_37 s< rdx_15)
else if (cond:1 != 0)
    int32_t rax_44 = arg4:4.d
    int32_t rbx_5 = rdi
    
    if (rdi s< rax_44)
        int32_t rcx_40 = r8_1
        
        do
            int32_t i = arg3[1]
            
            if (i s< arg3[3])
                int32_t j = arg3[2]
                
                do
                    int64_t r8_10 = sx.q(*arg3)
                    
                    if (r8_10.d s< j)
                        int32_t var_16c_1 = 0x3f800000
                        void* r10_1 = zx.q((i - arg3[1]) * r13_4) + zx.q((rbx_5 - rdi) * rcx_11)
                            + var_118 + (r8_10 << 1)
                        
                        do
                            r10_1 += 2
                            int32_t rax_52 = (i - arg3[1] + r15) * r12_1 + r8_10.d
                            r8_10 = zx.q(r8_10.d + 1)
                            int64_t rdx_26 = sx.q(rax_52)
                            *(*arg5 + (rdx_26 << 3)) = *(r10_1 - 2)
                            *(*arg5 + (rdx_26 << 3) + 6) = 0x3c00
                            j = arg3[2]
                        while (r8_10.d s< j)
                    
                    i += 1
                while (i s< arg3[3])
                
                rdi = arg4.d
                rax_44 = arg4:4.d
                rcx_40 = r8_1
            
            rbx_5 += 1
            r15 += rcx_40
        while (rbx_5 s< rax_44)

int64_t* rcx_42 = result_2[4]
(*(*rcx_42 + 0x48))(rcx_42, 0, 0)
int64_t* result = result_1
result[1].d -= 1

if (result[1].d == 1)
    int64_t* result_3 = result_1
    result = (**result_3)(result_3, 1)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
