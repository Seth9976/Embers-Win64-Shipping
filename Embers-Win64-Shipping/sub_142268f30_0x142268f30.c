// 函数: sub_142268f30
// 地址: 0x142268f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142279e50(arg1)
int64_t* rcx = arg1[0xc]
int64_t* r14

if (rcx == 0)
    r14 = nullptr
else
    r14 = (*(*rcx + 0x30))(rcx)

int64_t* i_2 = nullptr
int64_t* rbx = r14
int64_t* var_58 = rbx
int64_t* i = nullptr
int32_t result_1 = 0
int32_t var_78

if (r14 != 0)
    (*(*r14 + 0x358))(r14, 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX.cpp", 
        0x622)
    int16_t arg_8 = 2
    int32_t result_3 = (*(*r14 + 0x90))(r14, &arg_8)
    
    if (result_3 != 0)
        int32_t result_4 = result_3
        result_1 = result_3
        
        if (result_3 s> 0)
            sub_1405a4d70(&i_2)
            rbx = var_58
            result_4 = result_1
            i = i_2
        
        var_78 = 0
        int16_t arg_18 = 2
        (*(*rbx + 0x98))(rbx, &arg_18, i, zx.q(result_3), 0)
        
        for (; i != &i[sx.q(result_4)]; i = &i[1])
            int64_t* rax_7 = *i
            
            if (rax_7 != 0)
                int64_t* rbx_1 = nullptr
                
                if (rax_7[1].w == 6)
                    rbx_1 = rax_7
                
                if (rbx_1 != 0)
                    if ((*(*rbx_1 + 0x1f0))(rbx_1) != 0)
                        *i = 0
                    else
                        (*(*rbx_1 + 0x248))(rbx_1)
    
    (*(*r14 + 0x360))(r14)

int128_t zmm6 = 0x3dcccccd
int64_t i_3 = 6
int64_t i_1

do
    sub_14227ac70(arg2, zmm6)
    sub_14227bab0(arg1)
    sub_142281530(arg1)
    int64_t* rcx_11 = arg1[0x13]
    arg1[0x13] = 0
    
    if (rcx_11 != 0)
        rcx_11[9].d -= 1
        
        if (rcx_11[9].d == 1)
            sub_140a2f6e0(rcx_11)
    
    int64_t* rcx_12 = arg1[0xc]
    int64_t* rbx_2
    
    if (rcx_12 == 0)
        rbx_2 = nullptr
    else
        int64_t* rax_14 = (*(*rcx_12 + 0x30))(rcx_12)
        rbx_2 = rax_14
        
        if (rax_14 != 0)
            int64_t r9_2 = *rax_14
            (*(r9_2 + 0x358))(rax_14, 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX."
            "cpp", 
                0x609, r9_2, var_78)
    
    zmm6 = sub_1422667e0(arg1)
    
    if (rbx_2 != 0)
        (*(*rbx_2 + 0x360))(rbx_2)
    
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int64_t* rcx_16 = arg1[0xc]

if (rcx_16 != 0)
    int64_t* rax_17 = (*(*rcx_16 + 0x30))(rcx_16)
    
    if (rax_17 != 0)
        int64_t r9_3 = *rax_17
        (*(r9_3 + 0x358))(rax_17, 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX.cpp", 
            0x683, r9_3, var_78)
        int64_t r8_2 = *rax_17
        (*(r8_2 + 0x2b0))(rax_17, zx.q(arg1[0x3c].d), r8_2)
        (*(*rax_17 + 0x360))(rax_17)

if (var_58 != 0)
    (*(*var_58 + 0x358))(var_58, 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX.cpp", 
        0x641)

int64_t* i_4 = i_2
int64_t rbx_4 = 0
int64_t result = sx.q(result_1)
int64_t* i_5 = i_4
void* rcx_21 = &i_4[result]
uint64_t rsi_4 = (rcx_21 - i_4 + 7) u>> 3

if (i_4 u> rcx_21)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        result = *i_5
        
        if (result != 0)
            int64_t result_2 = 0
            
            if (*(result + 8) == 6)
                result_2 = result
            
            if (result_2 != 0)
                result = (*(*result_2 + 0x240))(result_2)
        
        i_5 = &i_5[1]
        rbx_4 += 1
    while (rbx_4 != rsi_4)

if (var_58 != 0)
    result = (*(*var_58 + 0x360))(var_58)

if (i_4 == 0)
    return result

return sub_140a74f90(i_4)
