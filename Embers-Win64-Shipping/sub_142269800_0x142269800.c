// 函数: sub_142269800
// 地址: 0x142269800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rcx = *(arg1 + 0x60)
int64_t* r13 = arg3
int32_t i = 0
int64_t var_108 = arg2
int64_t* rbx

if (rcx == 0)
    rbx = nullptr
else
    int64_t* rax_3
    rax_3, arg3 = (*(*rcx + 0x30))(rcx)
    rbx = rax_3

float zmm0 = 100f
wchar16 const* const var_f8 = u"WORLDAXES"
wchar16 const* const var_e8 = u"BODYAXES"
wchar16 const* const var_d8 = u"MASSAXES"
wchar16 const* const var_c8 = u"CONTACTPOINT"
wchar16 const* const var_b8 = u"CONTACTS"
wchar16 const* const var_a8 = u"CONTACTERROR"
wchar16 const* const var_98 = u"CONTACTFORCE"
wchar16 const* const var_88 = u"JOINTLIMITS"
wchar16 const* const var_78 = u"JOINTLOCALFRAMES"
wchar16 const* const var_68 = u"COLLISION"
int32_t var_9c = 0x42c80000
int32_t var_f0 = 1
int32_t var_ec = 0x3f800000
int32_t var_e0 = 2
int32_t var_dc = 0x3f800000
int32_t var_d0 = 3
int32_t var_cc = 0x3f800000
int32_t var_c0 = 7
int32_t var_bc = 0x3f800000
int32_t var_b0 = 8
int32_t var_ac = 0x3f800000
int32_t var_a0 = 9
int32_t var_90 = 0xa
int32_t var_8c = 0x3f800000
int32_t var_80 = 0x16
int32_t var_7c = 0x3f800000
int32_t var_70 = 0x15
int32_t var_6c = 0x3f800000
int32_t var_60 = 0xd
int32_t var_5c = 0x3f800000

if (rbx != 0)
    (*(*rbx + 0x358))(rbx, 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysUtils.cpp", 
        0x131)

arg3.b = 1
uint64_t r12
r12.b = 0
int64_t r15
r15.b = 0
char rax_5
int64_t r8
rax_5, r8 = sub_140b0f6c0(&var_108, u"PHYSX_CLEAR_ALL")
int512_t zmm2
int128_t zmm6

if (rax_5 == 0)
    zmm6 = zx.o(0)
    int32_t* r14_1 = &var_f0
    
    do
        int32_t rdi_2 = *r14_1
        r8.b = 1
        
        if (sub_140b0f6c0(&var_108, *(r14_1 - 8)) != 0)
            (*(*rbx + 0x260))(rbx, zx.q(rdi_2))
            uint64_t rdx_3 = zx.q(rdi_2)
            int64_t r8_1 = *(*rbx + 0x258)
            wchar16 const* const rdx_4
            
            if (zmm0 != 0f)
                zmm2.o = zx.o(0)
                r8_1(rbx, rdx_3, zmm2)
                rdx_4 = u"Flag un-set."
            else
                zmm2.o = r14_1[1]
                r8_1(rbx, rdx_3, zmm2)
                rdx_4 = u"Flag set."
            
            zmm0 = sub_140b1f640(r13, rdx_4, zmm2)
            r15.b = 1
        
        (*(*rbx + 0x260))(rbx, zx.q(rdi_2))
        r12 = zx.q(r12.b)
        
        if (zmm0 > 0f)
            r12 = 1
        
        i += 1
        r14_1 = &r14_1[4]
    while (i u< 0xa)
else
    sub_140b1f640(r13, u"Clearing all PhysX Debug Flags.")
    r15.b = 1
    int32_t* rdi_1 = &var_f0
    zmm6 = zx.o(0)
    
    do
        zmm2.o = zx.o(0)
        (*(*rbx + 0x258))(rbx, zx.q(*rdi_1), zmm2)
        i += 1
        rdi_1 = &rdi_1[4]
    while (i u< 0xa)

if (r12.b == 0)
    zmm2.o = zmm6
else
    zmm2.o = 0x41a00000

(*(*rbx + 0x258))(rbx, 0, zmm2)

if (r15.b == 0)
    sub_140b1f640(r13, u"Unknown PhysX visualization flag specified.")

(*(*rbx + 0x360))(rbx)
int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_128)
return result
