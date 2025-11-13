// 函数: sub_140feeaf0
// 地址: 0x140feeaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t entry_zmm2
int128_t entry_zmm3

if (data_143f01c92 != 0 && data_143f02bac u> 0)
    zmm6 = j_sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
int64_t* rcx = *(arg1 + 0x168)
int64_t arg_18 = 0
int64_t* arg_10 = nullptr
int32_t rax_1 = (*(*rcx + 0xc0))(rcx, &arg_18, &arg_10)
int64_t var_28

if (rax_1 s< 0)
    var_28 = *(arg1 + 0x168)
    zmm6 = sub_140fff020(rax_1, "Direct3DDevice->CreateQuery(&Desc, Query.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp", 
        0x78c)

if (data_143f01c92 != 0 && sub_140a80f40() != 0)
    char rax_3
    rax_3, zmm6 = sub_141976800()
    
    if (rax_3 != 0)
        zmm6 = sub_141989210()

int64_t* rcx_4 = *(arg1 + 0x150)
(*(*rcx_4 + 0xe0))(rcx_4, arg_10)
int64_t* rcx_5 = *(arg1 + 0x150)
(*(*rcx_5 + 0x378))(rcx_5)
int64_t* rcx_6 = *(arg1 + 0x150)
int64_t* rdx_2 = arg_10
int32_t i = 0
var_28.d = 0
char result = (*(*rcx_6 + 0xe8))(rcx_6, rdx_2, &i, 4, 0)

if (i == 0)
    int128_t var_18_1 = zmm6
    zmm6 = 0x3ba3d70a
    
    do
        zmm6 = sub_140b73230(zmm6)
        int64_t* rcx_7 = *(arg1 + 0x150)
        int64_t* rdx_3 = arg_10
        i = 0
        var_28.d = 0
        result = (*(*rcx_7 + 0xe8))(rcx_7, rdx_3, &i, 4, 0)
    while (i == 0)

if (data_143f01c92 != 0)
    result = sub_140a80f40()
    
    if (result != 0)
        result = sub_1419768f0()
        
        if (result != 0)
            result = _initp_eh_hooks()

int64_t* rcx_9 = arg_10

if (rcx_9 == 0)
    return result

return (*(*rcx_9 + 0x10))(rcx_9)
