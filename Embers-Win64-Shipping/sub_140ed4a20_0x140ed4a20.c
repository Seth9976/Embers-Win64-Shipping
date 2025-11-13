// 函数: sub_140ed4a20
// 地址: 0x140ed4a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1 + 8

if (arg1 == 0)
    rsi = nullptr

int64_t var_28 = data_143e202b8
int64_t var_20 = data_143e202c0
int64_t* rax_2 = data_143e202c8

if (rax_2 != 0)
    rax_2[1].d += 1

int32_t var_10
int32_t var_10_1 = var_10 & 0xfffffff0
int64_t* rbx = data_143e1e730:8
int64_t rcx = data_143e1e730.q

if (rbx != 0)
    rbx[1].d += 1

int64_t var_48 = data_143e1e728
int64_t var_40 = rcx

if (rbx != 0)
    rbx[1].d += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140e71020(rsi, arg1 + 0x48, TabCommands", CloseMajorTab", CloseMajorTab_ToolTip", 
    ".CloseMajorTab", Close Major Tab", Closes the focused major tab", 1, &var_48, &var_28)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp5_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rax_2 + 8))(rax_2, 1)

int64_t* rcx_8 = data_143e202c8
int64_t rax_13 = data_143e202b8
int64_t rdx_1 = data_143e202c0
var_48 = rax_13
int64_t var_40_1 = rdx_1
int64_t* var_38_1 = rcx_8

if (rcx_8 != 0)
    rcx_8[1].d += 1
    rcx_8 = data_143e202c8
    rdx_1 = data_143e202c0
    rax_13 = data_143e202b8

int32_t var_30
int32_t var_30_2 = ((var_30 & 0xfffffff2) | 2) & 0xfffffff0
var_28 = rax_13
int64_t var_20_1 = rdx_1

if (rcx_8 != 0)
    rcx_8[1].d += 1

int32_t var_10_2 = var_10_1 & 0xfffffff0
int64_t result = sub_140e71020(rsi, arg1 + 0x58, TabCommands", CloseMinorTab"
    , CloseMinorTab_ToolTip", ".CloseMinorTab", Close Minor Tab"
    , Closes the current window's active minor tab", 1, &var_28, &var_48)

if (rcx_8 != 0)
    rcx_8[1].d -= 1
    
    if (rcx_8[1].d == 1)
        result = (**rcx_8)(rcx_8)
        int32_t temp8_1 = *(rcx_8 + 0xc)
        *(rcx_8 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rcx_8 + 8))(rcx_8, 1)

if (var_38_1 != 0)
    var_38_1[1].d -= 1
    
    if (var_38_1[1].d == 1)
        result = (**var_38_1)(var_38_1)
        int32_t temp9_1 = *(var_38_1 + 0xc)
        *(var_38_1 + 0xc) -= 1
        
        if (temp9_1 == 1)
            return (*(*var_38_1 + 8))(var_38_1, 1)

return result
