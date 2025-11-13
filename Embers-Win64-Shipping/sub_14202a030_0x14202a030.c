// 函数: sub_14202a030
// 地址: 0x14202a030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dc98e0(arg1, arg2)
void* rax = sub_1424bf010()
sub_1424bf010()
void arg_18
int64_t* rax_1 = sub_140b58260(&arg_18, u"SpectatorClass", 1)
int64_t var_18
sub_140b63b70(rax_1, &var_18)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rax_2 = sub_1408f7ec0(rax, *rax_1)
int64_t var_28 = 0
int32_t var_20 = 0
sub_14241daa0(rax_2, arg2, &var_28)
var_28 = 1
var_20.b = 0
void* rax_3 = sub_1424bf010()
sub_1424bf010()
int64_t* rax_4 = sub_140b58260(&arg_18, u"GameModeClass", 1)
sub_140b63b70(rax_4, &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_14241daa0(sub_1408f7ec0(rax_3, *rax_4), arg2, &var_28)
void* rax_6 = sub_1424bf010()
sub_1424bf010()
int64_t* rax_7 = sub_140b58260(&arg_18, u"ReplicatedWorldTimeSeconds", 1)
sub_140b63b70(rax_7, &var_18)
int64_t rcx_12 = var_18

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

void* rax_8 = sub_1408f7ec0(rax_6, *rax_7)
var_28 = 0
int32_t var_20_1 = 0
sub_14241daa0(rax_8, arg2, &var_28)
void* rax_9 = sub_1424bf010()
sub_1424bf010()
int64_t* rax_10 = sub_140b58260(&arg_18, u"bReplicatedHasBegunPlay", 1)
sub_140b63b70(rax_10, &var_18)
int64_t rcx_17 = var_18

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

void* rax_11 = sub_1408f7ec0(rax_9, *rax_10)
var_28 = 0
int32_t var_20_2 = 0
return sub_14241daa0(rax_11, arg2, &var_28)
