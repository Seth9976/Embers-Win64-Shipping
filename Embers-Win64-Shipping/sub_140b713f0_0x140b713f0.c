// 函数: sub_140b713f0
// 地址: 0x140b713f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140a49550()
int64_t var_38
int64_t* rax = sub_140b13b30(&var_38)
int32_t rdx = rax[1].d
int32_t rdx_1 = neg.d(rdx)
int16_t* var_48 = *rax
*rax = 0
int32_t rcx_2 = rax[1].d
int32_t rcx_3 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, rdx != 0) + 0x29 + rcx_2

if (rdx_4 s> rcx_3)
    sub_1405947f0(&var_48, rdx_4)

sub_140a2cf70(&var_48, u"Binaries/ThirdParty/DbgHelp/dbghelp.dll", 0x27)
int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int16_t* const rcx_7 = &data_142d40450

if (rcx_2 != 0)
    rcx_7 = var_48

sub_140b67ab0(rcx_7)
data_143e18548 = _set_purecall_handler(new_handler)
int32_t rax_2 = GetSystemMetrics(SM_CXSCREEN)
int32_t rax_3

if (rax_2 s>= 0x280)
    rax_3 = GetSystemMetrics(SM_CYSCREEN)

if (rax_2 s< 0x280 || rax_3 s< 0x1e0)
    void var_28
    sub_140b21610(0, _vfprintf_p_l(&var_28, The current resolution is too low to run this game.", 
        Launch"), nullptr)
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rdi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rdi_1))
    
    sub_140afef00()
    sub_140599090(&data_14399ff88)
    PostQuitMessage(0)

HRSRC hResInfo = FindResourceW(nullptr, 0x3f2, 0xa)

if (hResInfo != 0)
    HGLOBAL hResData = LoadResource(nullptr, hResInfo)
    
    if (hResData != 0)
        uint32_t rax_8 = SizeofResource(nullptr, hResInfo)
        hResInfo = LockResource(hResData)
        
        if (rax_8 u> 1 && hResInfo != 0)
            hResInfo = sub_140b40050(hResInfo, zx.q(rax_8), 0)
    else
        hResInfo = sub_140b280e0()

int16_t* rcx_14 = var_48

if (rcx_14 == 0)
    return hResInfo

return sub_140a74f90(rcx_14)
